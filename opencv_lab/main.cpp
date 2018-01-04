#include <iostream>
#include <opencv2/opencv.hpp>
#include <cv.h>
#include <opencv2/highgui.hpp>
#include <QApplication>
#include <QWidget>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication QApp(argc, argv);





    QApp.exec();

    /*
    QApplication QApp(argc, argv);
    QWidget wid;
    wid.show();
    QApp.exec();

    cv::Mat mat;
    mat = cv::imread("/home/chen/opencv_lab/lena.jpg");
    cv::namedWindow("cv1");
    cv::imshow("cv1",mat);
    cv::waitKey(0);
    cout << "Hello World!" << endl;
    */
/*
    cvNamedWindow("win");

    CvCapture* capture = cvCreateCameraCapture(0);
    IplImage* frame;
    while(1)
    {
        frame = cvQueryFrame(capture);
        if(!frame) break;
        cvShowImage("win", frame);
        char c = cvWaitKey(30);
        if(c==27) break;
    }
    cvReleaseCapture(&capture);
    cvDestroyWindow("win");
*/
    return 0;
}
