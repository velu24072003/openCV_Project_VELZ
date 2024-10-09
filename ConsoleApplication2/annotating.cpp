#include<iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int main()
{
    // Read Images
    Mat img = imread("WhatsApp Image 2024-09-24 at 11.27.41_8a0ebbf1.jpg");
    // Display Image
    cout << "cols" << img.cols;
    cout << "rows" << img.rows;
    //imshow("Original Image", img);
    //waitKey();
    //// Print Error message if image is null
    //if (img.empty())
    //{
    //    cout << "Could not read image" << endl;
    //}
    //// Draw line on image
    //Mat imageLine = img.clone();
    //cout << "cols"<<img.cols;
    //Point pointA(0, 360);
    //Point pointB(img.cols, 360);
    //line(imageLine, pointA, pointB, Scalar(255, 255, 0),1,8,1);
    //imshow("Lined Image", imageLine);
    //waitKey();
    //Mat circle_image = img.clone();
    //Point circle_center(536,600);
    //// define the radius of circle
    //int radius = 100;
    //// Draw a circle using the circle() Function
    //circle(circle_image, circle_center, radius, Scalar(0, 0, 255), -1, 8, 0);
    //// Display the result
    //imshow("Circle on Image", circle_image);
    //Point top_lef (499,613);
    //Point bot_rit(630,749);
    //Mat Rect=img.clone();
    //rectangle(Rect,top_lef,bot_rit,Scalar(0,100,255),-1,8,0);
    //imshow("rectangle on Image", Rect);
    //waitKey();
    Mat imageEllipse = img.clone();
    // define the center point of ellipse
    Point ellipse_center(400, 400);
    // define the major and minor axes of the ellipse
    Point axis1(100, 50);
    Point axis2(100, 44);
    // Draw an ellipse using the ellipse() function
    //Horizontal
    ellipse(imageEllipse, ellipse_center, axis2, 90, 0, 180, Scalar(255, 0, 0), -2, 8, 0);
    // Vertical
    
    // display the output
    imshow("Ellipses on Image", imageEllipse);
    waitKey();
    Mat imageText = img.clone();
    // Write text using putText() function
    putText(imageText, "I am a Happy dog!", Point(50, 350), FONT_HERSHEY_COMPLEX, 1.5, Scalar(250, 225, 100),4);
    imshow("Text on Image", imageText);
    waitKey(0);
    return 0;
}