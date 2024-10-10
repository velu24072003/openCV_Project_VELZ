#include <opencv2/objdetect.hpp>
#include <iostream>
#include<opencv2/opencv.hpp>

using namespace cv;
using namespace std;
class qr_detection{
public:
qr_detection(){
    
    // Read image
    Mat inputImage;
    inputImage = imread("./sources/IMG20241008123914.jpg");
    Mat resize_img;
    resize(inputImage, resize_img,Size(200,200));
    imshow("QR", resize_img);
    waitKey(0);
    QRCodeDetector qrDecoder = QRCodeDetector::QRCodeDetector();
    std::string data = qrDecoder.detectAndDecode(inputImage);
    cout << data;
    
}
};