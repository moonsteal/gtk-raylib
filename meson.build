project('gtkraylib', 'c',
  version : '1.0.0'
)

raylib_proj = subproject('raylib')
raylib_dep = raylib_proj.get_variable('raylib_dep')
gtk_dep = dependency('gtk+-3.0')

gtkraylib_include = include_directories('src/')

gtkraylib_lib = static_library('gtk-raylib', 'src/gtkraylib.c',
	dependencies: [raylib_dep, gtk_dep],
	include_directories: gtkraylib_include
)

gtkraylib_dep = declare_dependency(
  link_with: gtkraylib_lib
)

#if get_option('gtkraylib_build_examples')
#	examples_deps = [raylib_dep]
#	executable('window', 'examples/window.c', dependencies: gtkraylib_dep)
#endif
