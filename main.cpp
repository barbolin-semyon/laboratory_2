#include <iostream>
#include "DrawingWindow.h"

int main() {
    Window *w = new Window("MyWindow", 50, 10, 10, 10, "E");
    DrawingWindow dr(w);
    dr.moveWindow();
    return 0;
}
