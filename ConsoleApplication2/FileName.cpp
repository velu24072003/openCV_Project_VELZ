
//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//int main(int, char**) {
//    cv::VideoCapture camera(0);
//    if (!camera.isOpened()) {
//        std::cerr << "ERROR: Could not open camera" << std::endl;
//        return 1;
//    }
//    cv::namedWindow("Webcam", cv::WINDOW_AUTOSIZE);
//    cv::Mat frame;
//    while (1) {
//        camera >> frame;
//        cv::imshow("Webcam", frame);
//        if (cv::waitKey(10) == 27)
//            break;
//    }
//    return 0;
//}