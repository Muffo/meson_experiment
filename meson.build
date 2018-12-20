project('tutorial', 'c')

# Create a configuration data object and read from meson_options.txt
cdata = configuration_data()
cdata.set('ENABLED', get_option('enabled'))
cdata.set('TEST', get_option('test'))

# Generate a C header file with the options above
configure_file(
  input : 'config.h.in',
  output : 'config.h',
  configuration : cdata
)

# Make sure config.h can be included correctly
config_inc = include_directories('.')

# Add a dependency to showcase the subprojects feature
# Note: they MUST be in the subprojects folder
dep = dependency('math', fallback : ['math', 'math_dep'])

executable(
  'demo', 'main.c',
  dependencies : dep,
  include_directories : config_inc
)
