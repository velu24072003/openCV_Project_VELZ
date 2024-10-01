//#include<opencv2/opencv.hpp>
//#include<iostream>
//
//using namespace std;
//using namespace cv;
//int main() {
//	Mat image = imread("C:/Users/velu2/OneDrive/Pictures/Saved Pictures/WhatsApp Image 2024-09-21 at 12.37.27_9a700ee0.jpg",1);
//	cout << image.rows;
//	cout << image.cols;
//	cout << image.size();
//	cout << "Channels: " << image.channels() << endl;
//	int down_width = 2;
//	int down_height = 2;
//	Mat i1,i2,i3,i4,con1,con2;
//	// resize down
//	resize(image, i1, Size(30,30),INTER_AREA);
//
//	imwrite("C:/Users/velu2/OneDrive/Pictures/Saved Pictures/velz.jpg",i1);
//	imwrite("C:/Users/velu2/OneDrive/Pictures/Saved Pictures/velz1.png",i1);
//	Mat cropped_image = image(Range(80, 280), Range(150, 330));
//	cout << i1.size();
//	imshow("car1", i1);
//	resize(image, i2, Size(), 1.5, 1.5, INTER_LINEAR);
//	imshow("car2", cropped_image);
//	resize(image, i3, Size(), 1.5, 1.5, INTER_CUBIC);
//	imshow("car3", i3);
//	/*vconcat(i1, i2,con1);
//	vconcat(con1, i3, con2);*/
//	/*imshow("image 1",i1);
//	imshow("img 2", );
//	imshow("img 3", con2);
//	imshow("img 4", con2);*/
//	waitKey(0);
//	return 0;
//}
