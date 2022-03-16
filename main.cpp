#include <iostream>
#include "DrawingWindow.h"

int main() {
    Window *w = new Window("MyWindow", 15, 10, 10, 10, "E");
    DrawingWindow dr(w);
    return 0;
}
