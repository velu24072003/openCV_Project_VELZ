//#include <opencv2/opencv.hpp>
//#include <opencv2/features2d.hpp>
//using namespace std;
//using namespace cv;
//
//int main() {
//    // Read image
//    cv::Mat im = cv::imread("C:\\Users\\velu2\\Downloads\\david-clode-Oq9JrJb6K7M-unsplash1.jpg",0);
//    Mat sobelx, sobely, sobelxy;
//    Mat img_blur;
//    GaussianBlur(im, img_blur,Size(3,3),0,0);
//    Sobel(img_blur, sobelx, CV_64F, 1, 0, 5);
//   
//    //// Display Sobel edge detection images
//    imshow("Sobel X", sobelx);
//    waitKey(0);
//    imshow("Sobel Y", sobely);
//    waitKey(0);
//    imshow("Sobel XY using Sobel() function", sobelxy);
//    waitKey(0);
//
//    // Set up the detector with default parameters
//    cv::Ptr<cv::SimpleBlobDetector> detector = cv::SimpleBlobDetector::create();
//    // Detect blobs
//    std::vector<cv::KeyPoint> keypoints;
//    detector->detect(im, keypoints);
//
//    //// Draw detected blobs as red circles
//    cv::Mat im_with_keypoints;
//    cv::drawKeypoints(im, keypoints, im_with_keypoints, cv::Scalar(0, 0, 255), cv::DrawMatchesFlags::DEFAULT);
//
//    //// Show blobs
//    cv::imshow("Keypoints", im_with_keypoints);
//    cv::waitKey(0);
//     //Canny edge detection
//    Mat edges;
//    Canny(img_blur, edges, 100, 200, 3, false);
//    // Display canny edge detected image
//    imshow("Canny edge detection", edges);
//    waitKey(0);
//    return 0;
//}
