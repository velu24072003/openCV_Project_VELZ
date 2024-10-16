#include <opencv2/opencv.hpp>
#include <iostream>
#include <chrono>
#include <thread>
using namespace std; // sleep_for, sleep_until
// nanoseconds, system_clock, seconds
class read_image{
public:
 read_image() {
    // Read the image from file
    for (int i = -1;; i++) {
    cv::Mat image = cv::imread("./sources/velu (1).jpg", i);
        cv::imwrite("./sources/velu4.jpg", image);
        this_thread::sleep_for(chrono::seconds(1));
        // Check if the image was loaded successfully
        if (image.empty()) {
            std::cout << "Could not open or find the image" << std::endl;

        }
        // Display the image in a window
        cv::imshow("Display window", image);
        
            cv::imwrite("C:/Users/velu2/Downloads/velu4.jpg", image);
        // Wait for a keystroke in the window
        cv::waitKey(0);
        
    }
    
}
};
