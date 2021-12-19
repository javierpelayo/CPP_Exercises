/*
*   Compile_1: g++ -std=c++11 trial.cpp -lfltk -o trial
*   Compile_2: g++ -std=c++11 `fltk-config --cxxflags` trial.cpp  `fltk-config --ldflags` -o trial
*
*   Second compile works, I don't know why.
*/

#include <FL/Fl.H>
#include <FL/Fl_Box.H> 
#include <FL/Fl_Window.H>

int main() {
    Fl_Window window(200, 200, "Window title");
    Fl_Box box(0,0,200,200, "Hey, I mean, Hello, World!"); window.show();
    return Fl::run();
}