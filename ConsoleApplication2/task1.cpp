//#include<iostream>
//#include <opencv2/opencv.hpp>
//using namespace std;
//using namespace cv;

////int main() {
////    Mat img = imread("C:/Users/velu2/OneDrive/Pictures/Saved Pictures/WhatsApp Image 2024-09-24 at 11.27.41_8a0ebbf1.jpg");
////    Mat crop1 = img(Range(0, 129), Range(0, 1000));
////
////    Mat crop2 = img(Range(207,343), Range(0, 1000));
////    Mat crop3 = img(Range(381, 530), Range(0, 1000));
////    Mat crop4 = img(Range(565, 711), Range(0, 1000));
////    
////    
////    imshow("Patched Image1", crop1);
////    imshow("Patched Image2", crop2);
////    imshow("Patched Image3", crop3);
////    imshow("Patched Image4", crop4);
////    waitKey();
////    destroyAllWindows();
////    return 0;
////}
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
////Mat redFilter(const Mat& src)
////{
////    assert(src.type() == CV_8UC3);
////
////    Mat redOnly;
////    inRange(src, Scalar(32,180,229,237), Scalar(38, 197, 239, 254), redOnly);
////
////    return redOnly;
////}
//
//int main()
//{
//    Mat input = imread("C:/Users/velu2/OneDrive/Pictures/Saved Pictures/WhatsApp Image 2024-09-24 at 11.27.41_8a0ebbf1.jpg");
//
//    //imshow("input", input);
//    //waitKey();
//
//    //assert(input.type() == CV_8UC3);
//    Mat redOnly;
//    inRange(input, Scalar(210, 170, 20), Scalar(255,240,204), redOnly);
//
//    //imshow("redOnly", redOnly);
//    //imwrite("C:/Users/velu2/OneDrive/Pictures/Saved Pictures/th.jpg", redOnly);
//    //waitKey();
//    //Mat thresh;
//    //threshold(redOnly, thresh, 150, 255, THRESH_BINARY);
//    vector<vector<Point>> contours;
//    vector<Vec4i> hierarchy;
//    //Mat count = imread("C:/Users/velu2/OneDrive/Pictures/Saved Pictures/th.jpg");
//    findContours(redOnly, contours, hierarchy, RETR_TREE, CHAIN_APPROX_NONE);
//    // draw contours on the original image
//    /*Mat image_copy = redOnly.clone();*/
//    Mat greenLine=Mat(819,1000,CV_8UC3,Scalar(255,255,255));
//  //  imwrite("C:/Users/velu2/OneDrive/Pictures/Saved Pictures/th3.jpg", greenLine);
//  
//    //drawContours(count, contours, -1, Scalar(0, 255, 0), 2);
//    drawContours(greenLine, contours, -1, Scalar(0, 255, 0), 2);
//    //imshow("None approximation", count);
//   // waitKey(0);
//    imshow("None approximation1", greenLine);
//    waitKey(0);
//    imwrite("C:/Users/velu2/OneDrive/Pictures/Saved Pictures/th1.jpg", greenLine);
//    //imwrite("contours_none_image1.jpg", image_copy)
//    destroyAllWindows();
//
//    // detect squares after filtering...
//
//    return 0;
//}


//int main()
//{
//    Mat input = imread("C:/Users/velu2/OneDrive/Pictures/Saved Pictures/WhatsApp Image 2024-09-24 at 11.27.41_8a0ebbf1.jpg");
//    Mat redOnly;
//    inRange(input, Scalar(210, 170, 20), Scalar(255, 240, 204), redOnly);
//    vector<vector<Point>> contours;
//    findContours(redOnly, contours, RETR_TREE, CHAIN_APPROX_NONE);
//    Mat greenLine = Mat(819, 1000, CV_8UC3, Scalar(255, 255, 255));
//    drawContours(greenLine, contours, -1, Scalar(0, 255, 0), 2);
//    imshow("None approximation1", greenLine);
//    waitKey(0);
//    destroyAllWindows();
//    return 0;
//}
//#include <opencv2/opencv.hpp>
//#include <vector>
//
//using namespace cv;
//using namespace std;

//int main()
//{
//    // Read the input image
//    Mat input = imread("C:\\Users\\velu2\\Downloads\\WhatsApp Image 2024-09-24 at 11.27.41_8a0ebbf1.jpg");
//
//
//    if (input.empty()) {
//        printf("Could not load image file\n");
//        return -1;
//    }
//
//    // Convert the image to grayscale
//    Mat gray;
//    cvtColor(input, gray, COLOR_BGR2GRAY);
//
//    // Threshold to create a binary image
//    Mat binary;
//    threshold(gray, binary, 100, 255, THRESH_BINARY);
//
//    // Find contours
//    vector<vector<Point>> contours;
//    vector<Vec4i> hierarchy;
//    findContours(binary, contours, hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE);
//
//    // Iterate through each contour
//    for (size_t i = 0; i < contours.size(); i++) {
//        // Get the bounding rectangle for each contour
//        Rect boundingBox = boundingRect(contours[i]);
//
//        // Draw the bounding rectangle on the original image
//        rectangle(input, boundingBox, Scalar(0, 255, 0), 2);
//    }
//
//    // Display the result
//    imshow("Bounding Rectangles", input);
//    waitKey(0);
//    destroyAllWindows();
//
//    return 0;
//}
