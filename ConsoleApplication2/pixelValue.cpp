//#include <opencv2/highgui.hpp>
//#include<iostream>
//#include<opencv2/opencv.hpp>
//cv::Mat img;
//cv::Mat img1 = img.clone();
//void call(int event, int x, int y, int flags, void* userdata) {
//	cv::String cordinates = "x:" + std::to_string(x) + " y:" + std::to_string(y);
//	if (event == cv::EVENT_LBUTTONDOWN)
//	{
//		cv::putText(img1, cordinates, cv::Point(20, 20), cv::FONT_HERSHEY_COMPLEX, 1.5, cv::Scalar(0, 0, 100), 2);
//		cv::imshow("img", img1);
//	}
//	else if (event == cv::EVENT_LBUTTONUP) {
//		/*std::cout << "x:"<<x << ", y" << y << "\n";
//		
//		int b=img.at<cv::Vec3b>(x, y)[0];
//		int g = img.at<cv::Vec3b>(x, y)[1];
//		int r = img.at<cv::Vec3b>(x, y)[2];
//		std::cout << "b:" << b << " g:" << g << " r:" << r<<"\n";
//		*/
//		cv::imshow("img1", img);
//		img1 = img.clone();
//		
//	}
//
//}
//
//int main() {
//
//	 //img = cv::Mat(cv::Size(200,200),CV_8UC3,cv::Scalar(243,2,43));
//	 //cv::cvtColor(img, img, cv::COLOR_BGR2RGB);
//	while (1) {
//		img = cv::imread("WhatsApp Image 2024-09-24 at 16.59.30_96264728.jpg");
//		cv::imshow("img", img);
//		cv::setMouseCallback("img", call, 0);
//		cv::waitKey();
//	}
//	return 0;
//}