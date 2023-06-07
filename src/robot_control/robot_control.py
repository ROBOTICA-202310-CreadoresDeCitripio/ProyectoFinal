import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import serial,time
import serial.tools.list_ports


class RobotController(Node):
    # El constructor de la clase se suscribe al tópico robot_cmdVel en la VM
    def __init__(self):
        super().__init__('robot_controller')
        # Open serial connection to Arduino
        ports = list(serial.tools.list_ports.comports())
        arduino_port = ports[0].device
        self.arduino = serial.Serial(port=arduino_port, baudrate=9600, timeout=0.1)
        # Wait for Arduino to reset
        time.sleep(2)

        self.subscription = self.create_subscription(
            String,
            'banner_destino',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.get_logger().info('Received banners: %s' % msg.data)
        self.serial_port.write(msg.data.encode())  # Send the string to Arduino through serial communication
        self.get_logger().info('Sent banner to Arduino')


def main(args=None):
    # Creación del nodo de ROS2 que controla al robot
    rclpy.init(args=args)
    robot_controller = RobotController()
    rclpy.spin(robot_controller)
    
    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    robot_controller.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
