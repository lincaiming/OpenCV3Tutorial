#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char** argv )
{

    Mat image;
    image = imread( "1.jpg");

    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    namedWindow("Display Image", WINDOW_AUTOSIZE );
    imshow("Display Image", image);

    Mat out;

    //方框滤波
    // boxFilter(image, out, -1, Size(5, 5));
    blur(image, out, Size(7, 7));

    imshow("blur image result", out);

    waitKey(0);

    return 0;
}
