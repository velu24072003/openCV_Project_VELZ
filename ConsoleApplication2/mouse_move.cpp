   
#include <opencv2/opencv.hpp>
#include <vector>
#include <iostream>
#include<Windows.h>

using namespace cv;
using namespace std;
class mouse_move {
public:
    Point top_left_corner, bottom_right_corner;
    Mat image;
    void drawRectangle(int action, int x, int y, int flags, void* userdata)
    {
        cout << "action:" << action;
        cout << "x:" << x;
        cout << "y:" << y;
        cout << "flags:" << flags; cout << "userdata:" << userdata;
        if (action == EVENT_LBUTTONDOWN)
        {
            top_left_corner = Point(x, y);
        }
        else if (action == EVENT_LBUTTONUP)
        {
            bottom_right_corner = Point(x, y);
            rectangle(image, top_left_corner, bottom_right_corner, Scalar(0, 0, 0), 2, 8);
            imshow("Window", image);
        }
    }
    void SimulateTyping(const string& text) {
        for (int i = 0; i < text.size(); i++) {
            SHORT vk = VkKeyScan(text[i]);
            if (vk == -1) continue;
            bool requiresShift = vk & 0x0100;
            if (requiresShift) {
                keybd_event(VK_SHIFT, 0, 0, 0);
            }
            keybd_event(LOBYTE(vk), 0, 0, 0);
            keybd_event(LOBYTE(vk), 0, KEYEVENTF_KEYUP, 0);
            if (requiresShift) {
                keybd_event(VK_SHIFT, 0, KEYEVENTF_KEYUP, 0);
            }
            Sleep(50);
        }
    }
    Point int1;
    void mousecor(int action, int x, int y, int flags, void* userdata) {
        if (action == MOUSE_MOVED) {
            int1 = Point(x, y);
            cout << int1 << "&&\n";
        }
    }
    mouse_move() {
        {
            SetCursorPos(420, 840);
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
            Sleep(2000);
            string text = "Tamil Cover Songs";
            Sleep(2000);
            SimulateTyping(text);
            /*namedWindow("mouse cordinate", 1);
            setMouseCallback("mouse cordinate",mousecor);*/

        }
    }
};
