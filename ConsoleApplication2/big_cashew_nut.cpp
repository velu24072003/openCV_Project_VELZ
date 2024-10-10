#include <opencv2/opencv.hpp>
#include <vector>
#include <chrono>
#include <thread>
using namespace std::this_thread; 
using namespace std::chrono;
using namespace cv;
using namespace std;
class big_cashew_nut {
    
public:
    big_cashew_nut()
{
  cv::VideoCapture camera(0);
if (!camera.isOpened()) {
    std::cerr << "ERROR: Could not open camera" << std::endl;
    
}
    //namedWindow("Webcam", cv::WINDOW_AUTOSIZE);
    Mat frame;

    Mat input;
    
    string k = "";
    
    int y = 1;
   
     while (1) {
        camera >> frame;
        //imshow("Webcam", frame);
        // waitKey(0);
         if (cv::waitKey(10) == 27)
             break;
         
         if (y == 7)
             break;
         k = to_string(y);
         input = frame;
        // input = imread("./sources/IMG-20240928-WA000" + k + ".jpg");
         if (input.empty()) {
             continue;
         }
    Mat gray;
    Mat vv1;
    cvtColor(input, gray, COLOR_BGR2GRAY);
    medianBlur(gray, vv1, 3);
    Mat binary;
    threshold(vv1, binary, 130,255, THRESH_BINARY);
    imshow("threshold", binary);
   
    //imshow("thersh", binary);
    //waitKey(0);
    vector<vector<Point>> contours;
    findContours(binary, contours, RETR_TREE, CHAIN_APPROX_SIMPLE);
    vector<unsigned int> arr    ;
    for (unsigned int i = 0; i < contours.size(); i++) {
        if ((contourArea(contours[i]) > 1000.0) && (contourArea(contours[i]) < 30000.0)) {
            string Area = "AREA:" + to_string((int)contourArea(contours[i])) + "px";
            putText(input, Area, Point((contours[i])[i]), FONT_HERSHEY_COMPLEX, 0.5, Scalar(50, 0, 255), 1);
            drawContours(input, contours, i, Scalar(255, 0, 0), 2);
            arr.push_back(i);
        } 
     
    }
    int bigIndex = 0;
    double max=0.0;
    
    cout << "\n";
        //cout<< contourArea(contours[arr[0]]);
      for (unsigned int i = 0; i < arr.size(); i++) {
        if (max < contourArea(contours.at(arr.at(i)))) {
            max = contourArea(contours.at(arr.at(i)));
            bigIndex = arr.at(i);
        }
    }
    drawContours(input, contours, bigIndex, Scalar(0, 255, 0), 2);
    imshow("Area Of Cashew nut", input);
    sleep_for(milliseconds(500));
}
    
   
}
};