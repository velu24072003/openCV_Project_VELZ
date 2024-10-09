
//#include<iostream>
//#include <opencv2/opencv.hpp>
//using namespace std;
//using namespace cv;
//int main() {
//
//
//	Mat	bright = cv::imread("./sources/ligght.png");
//	Mat	dark = cv::imread("./sources/light1.png");
//	Mat brightLAB, darkLAB, brightYCB, darkYCB, brightHSV, darkHSV;
//	cvtColor(bright, brightLAB,COLOR_BGR2Lab);
//	cvtColor(dark, darkLAB, COLOR_BGR2Lab);
//	cv::cvtColor(bright, brightYCB, cv::COLOR_BGR2YCrCb);
//	cv::cvtColor(dark, darkYCB, cv::COLOR_BGR2YCrCb);
//	cv::cvtColor(bright, brightHSV, cv::COLOR_BGR2HSV);
//	cv::cvtColor(dark, darkHSV, cv::COLOR_BGR2HSV);
//	cv::Vec3b bgrPixel(40, 158, 16);
//	// Create Mat object from vector since cvtColor accepts a Mat object
//	Mat3b bgr(bgrPixel);
//
//	//Convert pixel values to other color spaces.
//	Mat3b hsv, ycb, lab;
//	cvtColor(bgr, ycb, COLOR_BGR2YCrCb);
//	cvtColor(bgr, hsv, COLOR_BGR2HSV);
//	cvtColor(bgr, lab, COLOR_BGR2Lab);
//	//Get back the vector from Mat
//	Vec3b hsvPixel(hsv.at<Vec3b>(0, 0));
//	Vec3b ycbPixel(ycb.at<Vec3b>(0, 0));
//	Vec3b labPixel(lab.at<Vec3b>(0, 0));
//
//	int thresh = 40;
//
//	cv::Scalar minBGR = cv::Scalar(bgrPixel.val[0] - thresh, bgrPixel.val[1] - thresh, bgrPixel.val[2] - thresh);
//	cv::Scalar maxBGR = cv::Scalar(bgrPixel.val[0] + thresh, bgrPixel.val[1] + thresh, bgrPixel.val[2] + thresh);
//
//		cv::Mat maskBGR, resultBGR;
//	cv::inRange(bright, minBGR, maxBGR, maskBGR);
//	cv::bitwise_and(bright, bright, resultBGR, maskBGR);
//
//	cv::Scalar minHSV = cv::Scalar(hsvPixel.val[0] - thresh, hsvPixel.val[1] - thresh, hsvPixel.val[2] - thresh);
//	cv::Scalar maxHSV = cv::Scalar(hsvPixel.val[0] + thresh, hsvPixel.val[1] + thresh, hsvPixel.val[2] + thresh);
//
//		cv::Mat maskHSV, resultHSV;
//	cv::inRange(brightHSV, minHSV, maxHSV, maskHSV);
//	cv::bitwise_and(brightHSV, brightHSV, resultHSV, maskHSV);
//
//	cv::Scalar minYCB = cv::Scalar(ycbPixel.val[0] - thresh, ycbPixel.val[1] - thresh, ycbPixel.val[2] - thresh);
//	cv::Scalar maxYCB = cv::Scalar(ycbPixel.val[0] + thresh, ycbPixel.val[1] + thresh, ycbPixel.val[2] + thresh);
//
//		cv::Mat maskYCB, resultYCB;
//	cv::inRange(brightYCB, minYCB, maxYCB, maskYCB);
//	cv::bitwise_and(brightYCB, brightYCB, resultYCB, maskYCB);
//
//	cv::Scalar minLAB = cv::Scalar(labPixel.val[0] - thresh, labPixel.val[1] - thresh, labPixel.val[2] - thresh);
//	cv::Scalar maxLAB = cv::Scalar(labPixel.val[0] + thresh, labPixel.val[1] + thresh, labPixel.val[2] + thresh);
//
//		cv::Mat maskLAB, resultLAB;
//	cv::inRange(brightLAB, minLAB, maxLAB, maskLAB);
//	cv::bitwise_and(brightLAB, brightLAB, resultLAB, maskLAB);
//
//	cv::imshow("Result BGR", resultBGR);
//	waitKey();
//		cv::imshow("Result HSV", resultHSV);
//		waitKey();
//	cv::imshow("Result YCB", resultYCB);
//	waitKey();
//	cv::imshow("Output LAB", resultLAB);
//	waitKey();
//	return 0;
//}