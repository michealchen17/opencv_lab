#include "centralwidget.h"

CentralWidget::CentralWidget(QWidget *parent) : QLabel(parent),
    cameraTimer(this),
    capture(0)
//    imgLabel(this)

{
    connect(&cameraTimer, SIGNAL(timeout()), this, SLOT(CaptureImage()));

    setAlignment(Qt::AlignCenter | Qt::AlignHCenter);

    setMinimumSize(400,300);
//    cameraTimer.start(33);

}

void CentralWidget::OpenCamera()
{
    //cameraTimer.start(33);
    setText("Open Camera!");
}

void CentralWidget::CloseCamera()
{
    //cameraTimer.stop();
    setText("Close Camera!");

}

void CentralWidget::CaptureImage()
{
    if(!capture.isOpened())
    {
        cameraTimer.stop();

    }
    cv::Mat frame;
    capture >> frame;
    QImage img = cvMat2QImage(frame);
    setPixmap(QPixmap::fromImage(img));

}
