//#include<opencv2/opencv.hpp>
//#include<iostream>
//
//using namespace std;
//using namespace cv;
//int main() {
//	Mat image = imread("WhatsApp Image 2024-09-21 at 12.37.27_9a700ee0.jpg", 1);
//	cout << image.rows;
//	cout << image.cols;
//	cout << image.size();
//	cout << "Channels: " << image.channels() << endl;
//	int down_width = 2;
//	int down_height = 2;
//	Mat i1,i2,i3,i4,con1,con2;
//	// resize down
//	resize(image, i1, Size(30,30),INTER_AREA);
//	imwrite("resized_image.jpg",i1);
//	//diferent size
//	Mat cropped_image = image(Range(80, 280), Range(150, 330));
//	cout << i1.size();
//	imshow("size1", i1);
//	resize(image, i2, Size(), 1.5, 1.5, INTER_LINEAR);
//	imshow("size2", cropped_image);
//	resize(image, i3, Size(), 1.5, 1.5, INTER_CUBIC);
//	imshow("size3", i3);
//	waitKey(0);
//	return 0;
// 
//}
