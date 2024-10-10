#include<iostream>
#include<opencv2/opencv.hpp>
#include<vector>

using namespace std;
using namespace cv;
class threshold_mask {
public:
	threshold_mask()
	{
		Mat image = imread("./sources/colorshape.jpg");
		Mat image1 = imread("./sources/colorshape1.jpg");

		Mat img;
		resize(image, img, Size(500, 500), INTER_LINEAR);
		imshow("img", img);
		Mat img2;
		resize(image1, img2, Size(500, 500), INTER_LINEAR);
		imshow("img2", img2);

		/*Mat gray;
		cvtColor(img, gray, COLOR_BGR2GRAY);*/

		Mat rectangle;
		Mat hexagon;
		Mat trapezoid;
		Mat trapezoid1;
		/*
		inRange(img,Scalar(146, 49, 46), Scalar(160, 58, 60),rectangle);

		imshow("rectangle", rectangle);
		inRange(img, Scalar(200, 130, 0), Scalar(260, 193, 20),hexagon);

		imshow("hexagon", hexagon);
		inRange(img, Scalar(160,91,108), Scalar(182,110,128),trapezoid);

		imshow("trapezoid", trapezoid);
		inRange(img, Scalar(146, 49, 46), Scalar(182, 110, 128), trapezoid1);

		imshow("trapezoid1", trapezoid1);*/
		vector<Mat> a;
		Mat thresh2;
		Mat thresh3;
		cv::Mat imgImage(img.size(), CV_8UC3);
		split(img, a);
		threshold(a[1], thresh2, 130, 255, THRESH_BINARY);
		threshold(a[2], thresh3, 120, 255, THRESH_BINARY);

		Mat trapandrect;
		//rectangle & trapezoid
		bitwise_or(thresh2, thresh3, trapezoid1);
		threshold(trapezoid1, trapandrect, 0, 255, THRESH_BINARY_INV);

		cv::Mat imgImagerecandtra(img.size(), CV_8UC3);
		cvtColor(trapandrect, imgImagerecandtra, COLOR_GRAY2BGR);
		bitwise_and(imgImagerecandtra, img, imgImage);
		imshow("imgImage", imgImage);
		waitKey(0);
		// heXAGON
		threshold(a[2], hexagon, 10, 255, THRESH_BINARY_INV);
		cv::Mat imgImageHex(img.size(), CV_8UC3);
		cvtColor(hexagon, imgImageHex, COLOR_GRAY2BGR);
		bitwise_and(imgImageHex, img, imgImage);
		imshow("imgImage", imgImage);
		waitKey(0);

		//rectangle
		threshold(a[1], rectangle, 55, 255, THRESH_BINARY_INV);
		cv::Mat imgImagerec(img.size(), CV_8UC3);
		cvtColor(rectangle, imgImagerec, COLOR_GRAY2BGR);
		bitwise_and(imgImagerec, img, imgImage);
		imshow("imgImagerect", imgImage);
		waitKey(0);


		//trapezoid
		Mat theshtrap;
		Mat finaltrap;
		Mat check;
		threshold(a[1], theshtrap, 55, 255, THRESH_BINARY_INV);
		bitwise_or(trapezoid1, theshtrap, finaltrap);
		threshold(finaltrap, check, 55, 255, THRESH_BINARY_INV);
		cv::Mat imgImagetra(img.size(), CV_8UC3);
		cvtColor(check, imgImagetra, COLOR_GRAY2BGR);
		bitwise_and(img, img, imgImage);
		imshow("imgImagetra", imgImage);
		waitKey(0);


		//testing

		//Mat img1(500, 500, CV_8UC3);
		Mat img4(500, 500, CV_8UC3);
		//imshow("img1", img1);
		///*vector<Mat> spil;
		//split(img1, spil);
		//cout << spil.size();*/
		//Mat colchange;
		//Mat kk;
		//threshold(a[1],kk, 230, 255, THRESH_BINARY_INV);
		//cvtColor(kk, colchange, COLOR_GRAY2BGR);
		//vector<Mat> spil;
		//split(colchange, spil);
		//imshow("spil0", spil[0]);
		//imshow("spil1", spil[1]);
		//imshow("spil2", spil[2]);
		//cout << spil.size();
		//imshow("colchange", colchange);
		vector<int>arr1 = { 255,1,4,243 };
		vector<int>arr2 = { 0,255,3,223 };
		vector<int> arr3 = {};
		bitwise_and(arr1, arr2, arr3);
		/*imshow("colchangeq", img4);
		cout << imgImagetra;*/
		for (int a : arr3) {
			cout << a;
		}
		waitKey(0);

	}
};
