#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;

int main()
{
    Mat image = imread("1.jpg");
    Mat out;
    boxFilter(image, out, -1, Size(5, 5));
    imshow("source image", image);
    imshow("boxFilter image", out);
    
    waitKey();

}
