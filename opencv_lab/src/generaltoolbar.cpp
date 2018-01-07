#include "generaltoolbar.h"
#include "mainwindow.h"
QString imgPath = "../opencv_lab/img/";
GeneralToolbar::GeneralToolbar(const QString &title, QWidget *parent)
{
//  QMenu menu = new QMenu("Open Camera", this);
    MainWindow* pWidget = (MainWindow*)this->parent();
    m_centralImage = &(pWidget->m_centralWidget);


    setIconSize(QSize(32,32));
    openCameraAct = new QAction(QPixmap(imgPath + "Open_Camera.png"), "Open_Camera",this);
    connect(openCameraAct, &QAction::triggered, this, &GeneralToolbar::OpenCamera);
    addAction(openCameraAct);

    closeCameraAct = new QAction(QPixmap(imgPath + "Close_Camera.png"), "Close_Camera",this);
    connect(closeCameraAct, &QAction::triggered, this, &GeneralToolbar::CloseCamera);
    addAction(closeCameraAct);

}

void GeneralToolbar::OpenCamera()
{
    m_centralImage->OpenCamera();

}

void GeneralToolbar::CloseCamera()
{
    m_centralImage->CloseCamera();
}
