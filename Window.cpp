#include "Window.h"



Window::Window() {

}

Window::Window(
        string title, int width,
        int height, int leftUpX,
        int leftUpY, string colorCode
        ) :
        title(title), width(width),
        height(height), leftUpX(leftUpX),
        leftUpY(leftUpY), colorCode(colorCode) {

}

string Window::getTitle() {
    return title;
}

int Window::getWidth() {
    return width;
}

int Window::getHeight() {
    return height;
}

int Window::getLeftUpX() {
    return leftUpX;
}

int Window::getLeftUpY() {
    return leftUpY;
}

string Window::getColorCode() {
    return colorCode;
}
