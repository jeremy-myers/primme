#! /usr/bin/env python
from __future__ import division, print_function

# System imports
from distutils.core import *

# Third-party modules - we depend on numpy for everything
import numpy
try:
    from numpy.distutils.system_info import get_info
except:
    from numpy.__config__ import get_info

# Obtain the numpy include directory.
numpy_include = numpy.get_include()
lapack_info = get_info('lapack_opt')
blas_info = get_info('blas_opt')
blaslapack_libraries = lapack_info.get('libraries', ['lapack']) + blas_info.get('libraries', ['blas'])
blaslapack_library_dirs = lapack_info.get('library_dirs', []) + blas_info.get('library_dirs', [])

# Array extension module
_Primme = Extension("_Primme",
                   ["primme_wrap.cxx", "primmew.cxx"],
                   include_dirs = [numpy_include],
                   library_dirs = ["../lib"] + blaslapack_library_dirs,
                   libraries = ["primme"] + blaslapack_libraries,
                   #extra_compile_args = ["-g", "-O0", "-Wall", "-Wextra"]
                   )

# NumyTypemapTests setup
setup(name        = "NumpyPrimme",
      description = "PRIMME wrapper for Numpy",
      author      = "Eloy Romero",
      py_modules  = ["Primme"],
      ext_modules = [_Primme]
      )
