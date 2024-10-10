#include<iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

// draw contour area
class find_draw_contour{
public:
find_draw_contour()
{
    Mat input = imread("./sources/WhatsApp Image 2024-09-24 at 11.27.41_8a0ebbf1.jpg");
    Mat redOnly;
    inRange(input, Scalar(210, 170, 20), Scalar(255, 240, 204), redOnly);
    vector<vector<Point>> contours;
    findContours(redOnly, contours, RETR_TREE, CHAIN_APPROX_NONE);
    Mat greenLine = Mat(819, 1000, CV_8UC3, Scalar(255, 255, 255));
    drawContours(greenLine, contours, -1, Scalar(0, 255, 0), 2);
    imshow("None approximation1", greenLine);
    waitKey(0);
    destroyAllWindows();
}
};

