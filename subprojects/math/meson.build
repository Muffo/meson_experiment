# This is a subproject included as dependency from the main
project('math', 'c')

# Declare the dependency: shared library + header file
i = include_directories('include')
l = shared_library('math', 'src/math.c', include_directories : i)
math_dep = declare_dependency(include_directories : i, link_with : l)
