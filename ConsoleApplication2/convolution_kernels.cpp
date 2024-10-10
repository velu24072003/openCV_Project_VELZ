#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
using namespace cv;
class convolution_kernels{
public:
convolution_kernels()
{
    Mat kernel1 = (Mat_<double>(3, 3) << 0, -1, 0, -1, 4, -1, 0, -1, 0);
    Mat identity;
    Mat image = imread("./sources/david-clode-Oq9JrJb6K7M-unsplash1.jpg");
    filter2D(image, identity, -1, kernel1, Point(-1, -1), 0, 4);
    imshow("Original", image);
    waitKey(0);
   
    imshow("Identity", identity);
    waitKey(0);

    imwrite("david-clode-Oq9JrJb6K7M-unsplash.jpg", identity);
    destroyAllWindows();
  
}
};