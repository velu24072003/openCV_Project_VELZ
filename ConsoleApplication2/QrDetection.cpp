//#include <opencv2/objdetect.hpp>
//#include <iostream>
//#include<opencv2/opencv.hpp>
//
//using namespace cv;
//using namespace std;
//
//int main()
//{
//    
//    // Read image
//    Mat inputImage;
//    inputImage = imread("IMG20241008123914.jpg");
//    Mat resize_img;
//    resize(inputImage, resize_img,Size(200,200));
//    imshow("QR", resize_img);
//    waitKey(0);
//    QRCodeDetector qrDecoder = QRCodeDetector::QRCodeDetector();
//    std::string data = qrDecoder.detectAndDecode(inputImage);
//    cout << data;
//    
//    return 0;
//}