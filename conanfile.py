#!/usr/bin/env python
# -*- coding: utf-8 -*-

from conans import ConanFile

class LibhandlerExample(ConanFile):
    name = "libhandler-example"
    version = "0.1.0"
    description = "Example of using libhandler"
    generators = "cmake"
    url = "https://github.com/solvingj/libhandler-example"
    requires = "libhandler/0.5@bincrafters/stable"



