//#include <opencv2/opencv.hpp>
//
//#include <dirent.h>
//
//int main() {
//    DIR* dir = opendir("C:\\Users\\velu2\\OneDrive\\Pictures\\Saved Pictures\\");
//    struct dirent* ent;
//    while ((ent = readdir(dir)) != NULL) {
//        if (ent->d_type == DT_REG && strcmp(ent->d_name + strlen(ent->d_name) - 4, ".jpg") == 0) {
//            std::string filePath = std::string("C:\\Users\\velu2\\OneDrive\\Pictures\\Saved Pictures\\") + ent->d_name;
//            cv::Mat image = cv::imread(filePath);
//            // Process image
//            if (image.empty() == true)
//            {
//                std::cout << "no images";
//            }
//            cv::imshow("Image", image);
//            cv::waitKey(0);
//        }
//    }
//    closedir(dir);
//    return 0;
//}