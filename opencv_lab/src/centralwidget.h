#ifndef CENTRALWIDGET_H
#define CENTRALWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QTimer>
#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include "opencv2qt.h"

class CentralWidget : public QLabel
{
    Q_OBJECT
private:
    QLabel imgLabel;
    QTimer cameraTimer;
    cv::VideoCapture capture;

private:

public:
    explicit CentralWidget(QWidget *parent = 0);
    void OpenCamera();
    void CloseCamera();



signals:

private slots:
    void CaptureImage();
};

#endif // CENTRALWIDGET_H
