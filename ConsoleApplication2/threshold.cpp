
//#include "opencv2/imgproc.hpp"
//#include "opencv2/imgcodecs.hpp"
//#include "opencv2/highgui.hpp"
//#include <iostream>
//using namespace cv;
//using std::cout;
//int threshold_value = 0;
//int threshold_type = 3;
//int const max_value = 255;
//int const max_type = 4;
//int const max_binary_value = 255;
//Mat src, src_gray, dst;
//const char* window_name = "Threshold Demo";
//const char* trackbar_type = "Type: \n 0: Binary \n 1: Binary Inverted \n 2: Truncate \n 3: To Zero \n 4: To Zero Inverted";
//const char* trackbar_value = "Value";
//static void Threshold_Demo(int, void*)
//{
//    /* 0: Binary
//     1: Binary Inverted
//     2: Threshold Truncated
//     3: Threshold to Zero
//     4: Threshold to Zero Inverted
//    */
//    threshold(src_gray, dst, threshold_value, max_binary_value, threshold_type);
//    imshow(window_name, dst);
//}
//int main(int argc, char** argv)
//{
//    String imageName("./sources/WhatsApp Image 2024-09-24 at 16.59.30_96264728.jpg"); // by default
//    if (argc > 1)
//    {
//        imageName = argv[1];
//    }
//    src = imread(samples::findFile(imageName), IMREAD_COLOR); // Load an image
//    if (src.empty())
//    {
//        cout << "Cannot read the image: " << imageName << std::endl;
//        return -1;
//    }
//    cvtColor(src, src_gray, COLOR_BGR2GRAY); // Convert the image to Gray
//    namedWindow(window_name, WINDOW_AUTOSIZE); // Create a window to display results
//    createTrackbar(trackbar_type,
//        window_name, &threshold_type,
//        max_type, Threshold_Demo); // Create a Trackbar to choose type of Threshold
//    createTrackbar(trackbar_value,
//        window_name, &threshold_value,
//        max_value, Threshold_Demo); // Create a Trackbar to choose Threshold value
//    Threshold_Demo(0, 0); // Call the function to initialize
//    waitKey();
//    return 0;
//}
//#include "opencv2/opencv.hpp"
//
//using namespace cv;
//using namespace std;
//
//int main(int argc, char** argv)
//{
//
//	// Read image 
//	Mat src = imread("./sources/input_image.jpg", IMREAD_GRAYSCALE);
//	Mat dst;
//
//	// Basic threhold example 
//	threshold(src, dst, 0, 255, THRESH_BINARY);
//	imshow("opencv-threshold-example.jpg", dst);
//	waitKey(0);
//
//	// Thresholding with maxval set to 128
//	threshold(src, dst, 0, 128, THRESH_BINARY);
//	imshow("opencv-thresh-binary-maxval.jpg", dst);
//	waitKey(0);
//	// Thresholding with threshold value set 127 
//	threshold(src, dst, 127, 255, THRESH_BINARY);
//	imshow("opencv-thresh-binary.jpg", dst);
//	waitKey(0);
//	// Thresholding using THRESH_BINARY_INV 
//	threshold(src, dst, 127, 255, THRESH_BINARY_INV);
//	imshow("opencv-thresh-binary-inv.jpg", dst);
//	waitKey(0);
//	// Thresholding using THRESH_TRUNC 
//	threshold(src, dst, 127, 255, THRESH_TRUNC);
//	imshow("opencv-thresh-trunc.jpg", dst);
//	waitKey(0);
//	// Thresholding using THRESH_TOZERO 
//	threshold(src, dst, 127, 255, THRESH_TOZERO);
//	imshow("opencv-thresh-tozero.jpg", dst);
//	waitKey(0);
//	// Thresholding using THRESH_TOZERO_INV 
//	threshold(src, dst, 127, 255, THRESH_TOZERO_INV);
//	imshow("opencv-thresh-to-zero-inv.jpg", dst);
//	waitKey(0);
//}