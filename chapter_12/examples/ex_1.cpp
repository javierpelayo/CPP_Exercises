/*
*   Compile_1: g++ -std=c++11 trial.cpp -lfltk -o trial
*   Compile_2: g++ -std=c++11 `fltk-config --cxxflags` trial.cpp  `fltk-config --ldflags` -o trial
*   Compile_3: g++ -Wno-deprecated -I/usr/local/include -I/usr/include/freetype2 -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_THREAD_SAFE -D_REENTRANT -o 'windows_working' win_test.cpp Graph.cpp GUI.cpp Simple_window.cpp Window.cpp  /usr/local/lib/libfltk.a -lXext -lXft -lfontconfig -lXinerama -lpthread -ldl -lm -lX11
*   Second compile works, I don't know why.
*/

#include "Simple_window.h"
#include "Graph.h"
#include <stdexcept>

using namespace Graph_lib;

int main() {
    try {
        Point tl {100, 100};
        Simple_window win{tl, 600, 400, "Canvas"};
        win.wait_for_button();

    } catch (exceptions& e) {
        return 1;
    }
}