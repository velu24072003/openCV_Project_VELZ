//#include <opencv2/opencv.hpp>
//#include <iostream>
//#include <string>
//using namespace std;
//using namespace cv;
//
//int main() {
//	/*Mat img = imread("C:\\Users\\velu2\\OneDrive\\Pictures\\Saved Pictures\\colorshape.jpg");
//	imshow("original",img);
//	Mat erode_ , dilate_;
//	Mat elementKernal = getStructuringElement(MORPH_RECT, Size(3,3), Point(1, 1));
//	erode(img,erode_,elementKernal,Point(-1,-1),1);
//	dilate(img,dilate_, elementKernal,Point(-1,-1),1);
//	imshow("dilate_", dilate_);
//	imshow("erode", erode_);
//	waitKey(0);*/
//
//	cv::Mat img = cv::Mat(cv::Size(100, 100), CV_8UC1, cv::Scalar(255));
//	img.at<char>(1, 1) = 0;
//	cout<<img << endl;
//	imshow("img", img);
//	waitKey(0);
//	// britness controll using .convertTo
//	img.convertTo(img,-1,1,-50);
//	imshow("img1", img);
//	
//	img.convertTo(img, -1, 1, -100);
//	imshow("img1", img);
//	
//	img.convertTo(img, -1, 1, -150);
//	imshow("img1", img);
//
//	cout << img << endl;
//	cv::Mat elementKernal = getStructuringElement(MORPH_RECT, Size(3, 3), Point(1,2));
//	cout << img << endl;
//	cout << elementKernal << endl;
//	cv::erode(img, img, elementKernal, cv::Point(1, 1));
//	imshow("img", img);
//	waitKey(0);
//
//	//cout << img << endl;
//
//    //Uncomment the following line if you are compiling this code in Visual Studio
////#include "stdafx.h"
//
//        // Read the image file
//        Mat image = imread("C:\\Users\\velu2\\OneDrive\\Pictures\\Saved Pictures\\WhatsApp Image 2024-10-08 at 10.11.33_dc638ec7.jpg");
//
//        // Check for failure
//        if (image.empty())
//        {
//            cout << "Could not open or find the image" << endl;
//            cin.get(); //wait for any key press
//            return -1;
//        }
//
//        Mat imageContrastHigh2;
//        image.convertTo(imageContrastHigh2, -1, 1.3, 0); //increase the contrast by 2
//
//        Mat imageContrastHigh4;
//        image.convertTo(imageContrastHigh4, -1, 1.7, 0); //increase the contrast by 4
//
//        Mat imageContrastLow0_5;
//        image.convertTo(imageContrastLow0_5, -1, 0.2, 0); //decrease the contrast by 0.5
//
//        Mat imageContrastLow0_25;
//        image.convertTo(imageContrastLow0_25, -1, 0.25, 0); //decrease the contrast by 0.25
//
//
//        //Defining window names for above images
//        String windowNameOriginalImage = "Original Image";
//        String windowNameContrastHigh2 = "Contrast Increased by 2";
//        String windowNameContrastHigh4 = "Contrast Increased by 4";
//        String windowNameContrastLow0_5 = "Contrast Decreased by 0.5";
//        String windowNameContrastLow0_25 = "Contrast Decreased by 0.25";
//
//        //Create and open windows for above images
//        namedWindow(windowNameOriginalImage, WINDOW_NORMAL);
//        namedWindow(windowNameContrastHigh2, WINDOW_NORMAL);
//        namedWindow(windowNameContrastHigh4, WINDOW_NORMAL);
//        namedWindow(windowNameContrastLow0_5, WINDOW_NORMAL);
//        namedWindow(windowNameContrastLow0_25, WINDOW_NORMAL);
//
//        //Show above images inside the created windows.
//        imshow(windowNameOriginalImage, image);
//        imshow(windowNameContrastHigh2, imageContrastHigh2);
//        imshow(windowNameContrastHigh4, imageContrastHigh4);
//        imshow(windowNameContrastLow0_5, imageContrastLow0_5);
//        imshow(windowNameContrastLow0_25, imageContrastLow0_25);
//
//        waitKey(0); // Wait for any key stroke
//
//        destroyAllWindows();
//	return  0;
//
//}