
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;
class _threshold{
public:
 _threshold()
{

	// Read image 
	Mat src = imread("./sources/input_image.jpg", IMREAD_GRAYSCALE);
	Mat dst;

	// Basic threhold example 
	threshold(src, dst, 0, 255, THRESH_BINARY);
	imshow("opencv-threshold-example.jpg", dst);
	waitKey(0);

	// Thresholding with maxval set to 128
	threshold(src, dst, 0, 128, THRESH_BINARY);
	imshow("opencv-thresh-binary-maxval.jpg", dst);
	waitKey(0);
	// Thresholding with threshold value set 127 
	threshold(src, dst, 127, 255, THRESH_BINARY);
	imshow("opencv-thresh-binary.jpg", dst);
	waitKey(0);
	// Thresholding using THRESH_BINARY_INV 
	threshold(src, dst, 127, 255, THRESH_BINARY_INV);
	imshow("opencv-thresh-binary-inv.jpg", dst);
	waitKey(0);
	// Thresholding using THRESH_TRUNC 
	threshold(src, dst, 127, 255, THRESH_TRUNC);
	imshow("opencv-thresh-trunc.jpg", dst);
	waitKey(0);
	// Thresholding using THRESH_TOZERO 
	threshold(src, dst, 127, 255, THRESH_TOZERO);
	imshow("opencv-thresh-tozero.jpg", dst);
	waitKey(0);
	// Thresholding using THRESH_TOZERO_INV 
	threshold(src, dst, 127, 255, THRESH_TOZERO_INV);
	imshow("opencv-thresh-to-zero-inv.jpg", dst);
	waitKey(0);
}
};