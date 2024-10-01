
//#include "opencv2/imgproc.hpp"
//#include "opencv2/imgcodecs.hpp"
//#include "opencv2/highgui.hpp"
//using namespace cv;
//int main()
//{
    //// Declare variables
    //Mat src, dst;
    //Mat kernel;
    //Point anchor;
    //double delta;
    //int ddepth;
    //int kernel_size;
    //const char* window_name = "filter2D Demo";
    //const char* imageName = argc >= 2 ? argv[1] : "C:/Users/velu2/OneDrive/Pictures/Saved Pictures/WhatsApp Image 2024-09-24 at 16.59.30_96264728.jpg";
    //// Loads an image
    //src = imread(samples::findFile(imageName), IMREAD_COLOR); // Load an image
    //if (src.empty())
    //{
    //    printf(" Error opening image\n");
    //    printf(" Program Arguments: [image_name -- default lena.jpg] \n");
    //    return EXIT_FAILURE;
    //}
    //// Initialize arguments for the filter
    //anchor = Point(-1, -1);
    //delta = 0;
    //ddepth = -1;
    //// Loop - Will filter the image with different kernel sizes each 0.5 seconds
    //int ind = 0;
    //for (;;)
    //{
    //    // Update kernel size for a normalized box filter
    //    kernel_size = 3 + 2 * (ind % 5);
    //    kernel = Mat::ones(kernel_size, kernel_size, CV_32F) / (float)(kernel_size * kernel_size);
    //    // Apply filter
    //    filter2D(src, dst, ddepth, kernel, anchor, delta, BORDER_DEFAULT);
    //    imshow(window_name, dst);
    //    char c = (char)waitKey(500);
    //    // Press 'ESC' to exit the program
    //    if (c == 27)
    //    {
    //        break;
    //    }
    //    ind++;
    //}
    //return EXIT_SUCCESS;

//    Mat kernel1 = (Mat_<double>(3, 3) << 0, -1, 0, -1, 4, -1, 0, -1, 0);
//    Mat identity;
//    Mat image = imread("C:/Users/velu2/Downloads/david-clode-Oq9JrJb6K7M-unsplash1.jpg");
//    filter2D(image, identity, -1, kernel1, Point(-1, -1), 0, 4);
//    imshow("Original", image);
//    waitKey(0);
//   
//    imshow("Identity", identity);
//    waitKey(0);
//    imwrite("C:/Users/velu2/Downloads/david-clode-Oq9JrJb6K7M-unsplash.jpg", identity);
//    destroyAllWindows();
//    return 0;
//}