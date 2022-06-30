#!/usr/bin/env python3

# Always use setuptools
import setuptools

from numpy.distutils.core import setup

def configuration(parent_package='',top_path=None):
    from numpy.distutils.misc_util import Configuration

    config = Configuration(None, parent_package, top_path)
    config.add_subpackage('minnpd', 'minnpd')
    return config


def main():
    setup(name='minnpd',
          configuration = configuration)


if __name__ == "__main__":
    main()
