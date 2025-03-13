from setuptools import find_packages
from setuptools import setup

setup(
    name='turtle_pursuit_custom_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('turtle_pursuit_custom_interfaces', 'turtle_pursuit_custom_interfaces.*')),
)
