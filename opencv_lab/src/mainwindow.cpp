#include "mainwindow.h"
#include <qdebug.h>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
    m_centralWidget(this)

{
    // add menubar
    /*
    openImageAct = new QAction("Open Image", this);
    openCameraAct = new QAction("Open Camera", this);
    saveImageAct = new QAction("Save Image", this);
    closeCameraAct = new QAction("Close Camera", this);

    connect(openImageAct, &QAction::triggered, this, &MainWindow::OpenImage);
    connect(openCameraAct, &QAction::triggered, this, &MainWindow::OpenCamera);
    connect(saveImageAct, &QAction::triggered, this, &MainWindow::SaveImage);
    connect(closeCameraAct, &QAction::triggered, this, &MainWindow::CloseCamera);




    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(openImageAct);
    fileMenu->addAction(openCameraAct);
    fileMenu->addAction(saveImageAct);
    fileMenu->addAction(closeCameraAct);

*/

    //add toolbars
    SetupToolBars();


    this->setCentralWidget(&m_centralWidget);

 //   cv::namedWindow("img");


}

void MainWindow::SetupToolBars()
{
    GeneralToolbar* genToolbar = new GeneralToolbar("GeneralToolbar", this);
    toolBarList.append(genToolbar);
    addToolBar(genToolbar);

}

MainWindow::~MainWindow()
{

}

void MainWindow::CaptureImage()
{

}

void MainWindow::OpenImage()
{

}

void MainWindow::OpenCamera()
{


}

void MainWindow::SaveImage()
{


}

void MainWindow::CloseCamera()
{


}




