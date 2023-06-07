from setuptools import find_packages
from setuptools import setup

setup(
    name='group_15',
    version='0.0.0',
    packages=find_packages(
        include=('group_15', 'group_15.*')),
)
