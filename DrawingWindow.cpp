
#include "DrawingWindow.h"

 Window * DrawingWindow::initFieldsWindow() {
    string s;
    cout << "Write title" << endl;
    cin >> s;
    string tempTitle = s;

    cout << "Write width" << endl;
    cin >> s;
    int tempWidth = atoi(s.c_str());

    cout << "Write height" << endl;
    cin >> s;
    int tempHeight = atoi(s.c_str());

    cout << "Write X" << endl;
    cin >> s;
    int tempLeftUpX = atoi(s.c_str());

    cout << "Write Y" << endl;
    cin >> s;
    int tempLeftUpY = atoi(s.c_str());

    cout << "Write color's code" << endl;
    cin >> s;
    string tempColorCode = s;

    return new Window(tempTitle, tempWidth, tempHeight, tempLeftUpX, tempLeftUpY, tempColorCode);
}

DrawingWindow::DrawingWindow(): window(initFieldsWindow()) {}

DrawingWindow::DrawingWindow(Window * window): window(window) {}




