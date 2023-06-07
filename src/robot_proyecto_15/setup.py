from setuptools import setup

package_name = 'robot_proyecto_15'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='robotica',
    maintainer_email='n.rincon4@uniandes.edu.co',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'robot_proyecto_navegacion = robot_proyecto_15.robot_proyecto_navegacion:main',
            'robot_proyecto_manipulacion = robot_proyecto_15.robot_proyecto_manipulacion:main',
            'robot_proyecto_percepcion = robot_proyecto_15.robot_proyecto_percepcion:main'
        ],
    },
)
