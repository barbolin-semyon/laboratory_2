

#include "string"

using namespace std;

class Window {
public:
    Window();
    Window(string title, int width, int height, int leftUpX, int leftUpY, string colorCode);


    string getTitle();
    int getWidth();
    int getHeight();
    int getLeftUpX();
    int getLeftUpY();
    string getColorCode();

private:
    string title;
    int width;
    int height;
    int leftUpX;
    int leftUpY;
    string colorCode;
};




