//
// Created by syoma on 07.03.2022.
//

#ifndef LABORATORY_2_DSFGFDG_H
#define LABORATORY_2_DSFGFDG_H

#include "string"
#include <iostream>
#include "Window.h"

using namespace std;

class Window;

class DrawingWindow {
public:
    DrawingWindow(Window * window);
    DrawingWindow();
    void registerWindow();
    void changeColor(string colorCode);

private:
    Window * initFieldsWindow();
    Window * window;
    void draw();
    void clear();
    void drawPaddingTop(int value);
    void drawPaddingLeft(int value);
    void drawTitle(string title, int paddingLeftValue);
    void drawBody(int width, int height, int paddingLeftValue);
};

#endif
