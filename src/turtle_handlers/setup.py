from setuptools import find_packages, setup

package_name = 'turtle_handlers'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='joseph',
    maintainer_email='joejoseph007@outlook.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "alive_turtle_server=turtle_handlers.Turtle_Alive_Server:main",
            "turtle_manager=turtle_handlers.Turtle_Manager:main",
            "catch_turtle=turtle_handlers.Turtle_Main:main"
        ],
    },
)
