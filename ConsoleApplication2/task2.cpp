//#include <opencv2/opencv.hpp>
//#include <vector>
//
//using namespace cv;
//using namespace std;
//
//int main()
//{
//  cv::VideoCapture camera(0);
//if (!camera.isOpened()) {
//    std::cerr << "ERROR: Could not open camera" << std::endl;
//    return 1;
//}
//    //namedWindow("Webcam", cv::WINDOW_AUTOSIZE);
//    Mat frame;
//
//    Mat input;
//    
//    string k = "";
//    
//    int y = 1;
//   
//     while (1) {
//        camera >> frame;
//        //imshow("Webcam", frame);
//        // waitKey(0);
//         if (cv::waitKey(10) == 27)
//             break;
//         
//         if (y == 7)
//             return 0;
//         k = to_string(y);
//         input = frame;
//        // input = imread("C:\\Users\\velu2\\OneDrive\\Pictures\\Saved Pictures\\IMG-20240928-WA000" + k + ".jpg");
//         if (input.empty()) {
//             continue;
//         }
//    Mat gray;
//    Mat vv1;
//    cvtColor(input, gray, COLOR_BGR2GRAY);
//    medianBlur(gray, vv1, 3);
//    Mat binary;
//    threshold(vv1, binary, 142,255, THRESH_BINARY);
//    //imshow("thersh", binary);
//    //waitKey(0);
//    vector<vector<Point>> contours;
//    findContours(binary, contours, RETR_TREE, CHAIN_APPROX_SIMPLE);
//    string Area = "AREA:";
//    vector<unsigned int> arr    ;
//    for (unsigned int i = 0; i < contours.size(); i++) {
//        if ((contourArea(contours[i]) > 18000.0) && (contourArea(contours[i]) < 50000.0)) {
//            Area += to_string(contourArea(contours[i])) + "px";
//            putText(input, Area, Point(0, 30), FONT_HERSHEY_COMPLEX, 0.5, Scalar(250, 225, 100), 1);
//            drawContours(input, contours, i, Scalar(255, 0, 0), 2);
//            imshow("Area Of Cashew nut", input);
//            arr.push_back(i);
//            
//           
//        } 
//        
//    }
//    //int bigIndex = 0;
//    //double max;
//    cout << arr.at(0);
//    cout << "\n";
//        //cout<< contourArea(contours[arr[0]]);
//     /* for (unsigned int i = 0; i < arr.size(); i++) {
//        if (max < contourArea(contours[arr[i]])) {
//            max = contourArea(contours[arr[i]]);
//            bigIndex = i;
//        }
//    }*/
//  /*  drawContours(input, contours, bigIndex, Scalar(0, 255, 0), 2);
//    waitKey(0);*/
//    //y++;
//}
//    return 0;
//}
