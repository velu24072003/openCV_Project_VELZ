//// Import Packages
//#include <opencv2/opencv.hpp>
//#include <iostream>
//#include <string>
//
//// Using namespace to nullify use of cv::function(); syntax
//using namespace std;
//using namespace cv;
//
//int maxScaleUp = 100;
//int scaleFactor = 1;
//int scaleFactor1 = 1;
//
//string windowName = "Resize Image";
//string trackbarValue = "Scale";
//
//// Callback functions
//void scaleImage(int, void*)
//{
//    // Read the image
//    Mat image = imread("./sources/colorshape.jpg");
//
//    // Get the Scale factor from the trackbar
//    double scaleFactorDouble = 1 + scaleFactor / 100.0;
//
//    // Set the factor to 1 if becomes 0
//    if (scaleFactorDouble == 0)
//    {
//        scaleFactorDouble = 1;
//    }
//
//    Mat scaledImage;
//    // Resize the image
//    resize(image, scaledImage, Size(), scaleFactorDouble, scaleFactorDouble, INTER_LINEAR);
//    // Display the image
//    imshow(windowName, scaledImage);
//  /*  cout << scaleFactorDouble<<"\n";
//    cout << scaleFactor << "\n";
//    cout << scaleFactor1 << "\n";*/
//    cout << scaleFactor << " * " << scaleFactor1 << " =" << (scaleFactor * scaleFactor1)<<"\n";
//}
//
//int main()
//{
//    // load an image
//    Mat image = imread("./sources/colorshape.jpg");
//
//    // Create a window to display results and set the flag to Autosize
//    namedWindow(windowName, WINDOW_AUTOSIZE);
//
//    // Create Trackbars and associate a callback function
//    createTrackbar("number", windowName, &scaleFactor, maxScaleUp, scaleImage);
//    createTrackbar("multiplicant", windowName, &scaleFactor1, maxScaleUp, scaleImage);
//    scaleImage(25, 0);
//
//
//    // Display image
//    imshow(windowName, image);
//    waitKey(0);
//    destroyAllWindows();
//    return 0;
//}