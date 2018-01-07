#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "centralwidget.h"

#include <QMenuBar>
#include <QList>


#include "generaltoolbar.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void SetupToolBars();

public:
    CentralWidget m_centralWidget;

private:
    //ui element
    //Menu-File
    QMenu* fileMenu;

    QList<QToolBar*> toolBarList;


    QAction* openImageAct;
    QAction* openCameraAct;
    QAction* saveImageAct;
    QAction* closeCameraAct;




signals:

public slots:
    void OpenImage();
    void OpenCamera();
    void SaveImage();
    void CloseCamera();
    void CaptureImage();
};

#endif // MAINWINDOW_H
