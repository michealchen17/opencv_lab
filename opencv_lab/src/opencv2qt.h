#ifndef OPENCV2QT_H
#define OPENCV2QT_H
#include <QImage>
#include <opencv2/opencv.hpp>
QImage cvMat2QImage(const cv::Mat& mat);

cv::Mat QImage2cvMat(QImage image);

#endif // OPENCV2QT_H
