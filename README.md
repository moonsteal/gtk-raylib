# GTKRaylib
A little library for embedding raylib onto GTK3.

- Gtk+-3.x (OpenGL 3.3)
- LibEpoxy : https://github.com/anholt/libepoxy
- Raylib 3.x : https://github.com/raysan5/raylib

# Compile gtk-raylib
meson build
cd build
ninja

# About this project
We wanted to embed raylib into a GTK3 project and We couldnt find anything useful except [hbiblia's AMAZING gtk-raylib](github.com/hbiblia/gtk-raylib), 
but it seemed abandoned and it lacked a proper build system, so [@darltrash](github.com/darltrash) decided to fork it and add meson support.

This project is still a work in progress.
