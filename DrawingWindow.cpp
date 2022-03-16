
#include "DrawingWindow.h"

#include <Windows.h>
#include <sstream>

Window * DrawingWindow::initFieldsWindow() {
    string s;
    cout << "Write title" << endl;
    getline(cin, s);
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
    cout << "1\tBlue\t9\tLight Blue\n"
            "2\tGreen\t0\tBlack\n"
            "3\tAqua\tA\tLight Green\n"
            "4\tRed\tB\tLight Aqua\n"
            "5\tPurple\tC\tLight Red\n"
            "6\tYellow\tD\tLight Purple\n"
            "7\tWhite\tE\tLight Yellow\n"
            "8\tGray\tF\tBright White" << endl;
    cin >> s;
    string tempColorCode = s;

    return new Window(tempTitle, tempWidth, tempHeight, tempLeftUpX, tempLeftUpY, tempColorCode);
}

DrawingWindow::DrawingWindow(): window(initFieldsWindow()) {
    changeColor(window->getColorCode());
    draw();
}

DrawingWindow::DrawingWindow(Window * window): window(window) {
    changeColor(window->getColorCode());
    draw();
}

void DrawingWindow::changeColor(string colorCode) {
    stringstream ss;
    ss << "color 0" << colorCode;
    system(ss.str().c_str());
}


void DrawingWindow::draw() {
    drawPaddingTop(window->getLeftUpY());
    drawTitle(window->getTitle(), window->getLeftUpX());
    drawBody(window->getWidth(), window->getHeight(), window->getLeftUpX());
    cout << endl << "Write step to move(w, a, s, d)" << endl;
}

void DrawingWindow::drawPaddingTop(int value) {
    for (int i = 0; i < value; i++) {
        cout << endl;
    }
}

void DrawingWindow::clear() {
    system ("cls");
}

void DrawingWindow::drawPaddingLeft(int value) {
    for (int k = 0; k < value; k++) {
        cout << " ";
    }
}

void DrawingWindow::drawTitle(string title, int paddingLeftValue) {
    drawPaddingLeft(paddingLeftValue);
    cout << window->getTitle() << endl;
}

void DrawingWindow::drawBody(int width, int height, int paddingLeftValue) {
    for (int i = 0; i < height; i++) {
        drawPaddingLeft(paddingLeftValue);
        for (int j = 0; j < width; j++) {
            cout << "#";
        }
        cout << endl;
    }
}

void DrawingWindow::updateWindow() {
    clear();
    draw();
}


void DrawingWindow::moveWindow() {
    while(getchar()) {
        if (getchar() == 'd') {
            window->operator++();

        }

        if (getchar() == 'a') {
            window->operator--();
        }

        if (getchar() == 'w') {
            window->operator++(0);
        }

        if (getchar() == 's') {
            window->operator--(0);
        }

        updateWindow();


    }
}




