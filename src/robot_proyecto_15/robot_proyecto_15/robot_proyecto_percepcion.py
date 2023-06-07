import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from group_15.msg import Banner
from group_15.srv import StartPerceptionTest


class PerceptionRobot(Node):

    def __init__(self):
        super().__init__('perception_node')
        self.service = self.create_service(StartPerceptionTest, '/group_15/start_perception_test_srv', self.perception_test_callback)
        self.banner_a = self.service.banner_a
        self.banner_b = self.service.banner_b
        self.publisher_ = self.create_publisher(String, 'banner_destino', 10)
        self.subscriber_ = self.create_subscriber(Banner, '/vision/banner_group_15', self.camera_callback)
        #timer_period = 0.5
        #self.timer = self.create_timer(timer_period, self.timer_callback)
        #self.i = 0

    def perception_test_callback(self, request, response):
        response.answer = "Debo identificar el banner a que se encuentra en las coordenadas" + str(request.banner_a) + " y el banner b que se encuentra en las coordenadas " + str(request.banner_b)
        return response
    
    def camera_callback(self, msg):
        self.get_logger().info('Recibiendo mensaje de banner')
        self.get_logger().info('Banner: %s' % msg.banner)
        self.get_logger().info('Coordenadas: %s' % msg.coordenadas)
        self.get_logger().info('Color: %s' % msg.color)
        self.get_logger().info('Forma: %s' % msg.forma)

def main(args=None):
    rclpy.init(args=args)

    perception_robot = PerceptionRobot()

    rclpy.spin(perception_robot)

    perception_robot.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()