//#include<iostream>
//#include <opencv2/opencv.hpp>
//using namespace std;
//using namespace cv;
//
//int main() {
//    Mat image = imread("./sources/WhatsApp Image 2024-09-24 at 16.59.30_96264728.jpg");
//    Point2f center(0,0);
//    Mat rotation_matix = getRotationMatrix2D(center,10, 1.0);
//    Mat rotated_image;
//    auto a = rotated_image.size();
//    cout << a;
//    warpAffine(image, rotated_image, rotation_matix,image.size(), 0);
//    //imshow("Rotated image", rotated_image);
//    waitKey(0);
//    
//    int height = image.cols;
//    int width = image.rows;
//    // get tx and ty values for translation
//    float tx = -2;
//        float ty = 2;
//    // create the translation matrix using tx and ty
//    float warp_values[] = { 1.0, 0.0, tx, 0.0, 1.0, ty };
//    Mat translation_matrix = Mat(2, 3, CV_32F, warp_values);
//    // save the resulting image in translated_image matrix
//    Mat translated_image;
//    // apply affine transformation to the original image using the translation matrix
//    warpAffine(image, translated_image, translation_matrix, image.size());
//    imshow("Translated image", translated_image);
//    /*imshow("Original image", image);*/
//    waitKey(0);
//    // save the translated image to disk
//    imwrite("translated_image.jpg", translated_image);
//}