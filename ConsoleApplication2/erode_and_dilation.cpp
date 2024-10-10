#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;
class erode_and_dilation{
	erode_and_dilation() {
		Mat img = imread("./sources/colorshape.jpg");
		imshow("./sources/original",img);
		Mat erode_ , dilate_;
		Mat elementKernal = getStructuringElement(MORPH_RECT, Size(3,3), Point(1, 1));
		erode(img,erode_,elementKernal,Point(-1,-1),1);
		dilate(img,dilate_, elementKernal,Point(-1,-1),1);
		imshow("dilate_", dilate_);
		imshow("erode", erode_);
		waitKey(0);
	}

};