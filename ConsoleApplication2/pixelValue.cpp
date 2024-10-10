#include <opencv2/highgui.hpp>
#include<iostream>
#include<opencv2/opencv.hpp>
class find_pixel_value {
	cv::Mat img;
	cv::Mat img1 = img.clone();
public:
	find_pixel_value(int event, int x, int y, int flags, void* userdata) {
		cv::String cordinates = "x:" + std::to_string(x) + " y:" + std::to_string(y);
		if (event == cv::EVENT_LBUTTONDOWN)
		{
			cv::putText(img1, cordinates, cv::Point(20, 20), cv::FONT_HERSHEY_COMPLEX, 1.5, cv::Scalar(0, 0, 100), 2);
			cv::imshow("img", img1);
		}
		else if (event == cv::EVENT_LBUTTONUP) {
			std::cout << "x:"<<x << ", y" << y << "\n";

			int b=img.at<cv::Vec3b>(x, y)[0];
			int g = img.at<cv::Vec3b>(x, y)[1];
			int r = img.at<cv::Vec3b>(x, y)[2];
			std::cout << "b:" << b << " g:" << g << " r:" << r<<"\n";
		
			cv::imshow("img1", img);
			img1 = img.clone();

		}

	}

};