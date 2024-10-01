   
//#include <opencv2/opencv.hpp>
//#include <vector>
//#include <iostream>
//#include<Windows.h>
//
////Using namespace to nullify use of cv::function(); syntax
//using namespace cv;
//using namespace std;
//
//// Points to store the bounding box coordinates
//Point top_left_corner, bottom_right_corner;
//// image image
//Mat image;
//
//// function which will be called on mouse input
//void drawRectangle(int action, int x, int y, int flags, void* userdata)
//{
//    cout << "action:" << action;
//    cout << "x:" << x;
//    cout << "y:" << y;
//    cout << "flags:" << flags; cout << "userdata:" <<  userdata;
//    // Mark the top left corner when left mouse button is pressed
//    if (action == EVENT_LBUTTONDOWN)
//    {
//        top_left_corner = Point(x, y);
//    }
//    // When left mouse button is released, mark bottom right corner
//    else if (action == EVENT_LBUTTONUP)
//    {
//        bottom_right_corner = Point(x, y);
//        // Draw rectangle
//        rectangle(image, top_left_corner, bottom_right_corner, Scalar(0, 0, 0), 2, 8);
//        // Display image
//        imshow("Window", image);
//    }
//
//}
//#include <iostream>
//#include <windows.h>
//
//using namespace std;
//
//void SimulateTyping(const string& text) {
//    for (int i = 0; i < text.size(); i++) {
//        SHORT vk = VkKeyScan(text[i]);
//        if (vk == -1) continue; // Skip unsupported characters
//        bool requiresShift = vk & 0x0100;
//        // Press SHIFT if required
//        if (requiresShift) {
//            keybd_event(VK_SHIFT, 0, 0, 0);
//        }
//        // Simulate key press and release
//        keybd_event(LOBYTE(vk), 0, 0, 0); // Key down
//        keybd_event(LOBYTE(vk), 0, KEYEVENTF_KEYUP, 0); // Key up
//        // Release SHIFT if it was pressed
//        if (requiresShift) {
//            keybd_event(VK_SHIFT, 0, KEYEVENTF_KEYUP, 0);
//        }
//        Sleep(50); // Small delay between keystrokes
//    }
//}
//
//
//
//
//// Main function
//int main()
//{
//    
//    SetCursorPos(420, 840);
//    // loop until q character is pressed
//    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
//    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
//    Sleep(2000);
//    string text = "tamil cover songs";
//    
//    Sleep(2000); // Delay to switch focus to the input window
//
//    SimulateTyping(text);
//    
//
//    
//    return 0;
//}
