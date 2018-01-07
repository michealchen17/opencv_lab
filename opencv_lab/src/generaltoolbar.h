#ifndef GENERALTOOLBAR_H
#define GENERALTOOLBAR_H
#include <QToolBar>
#include "centralwidget.h"
QT_FORWARD_DECLARE_CLASS(QAction)
QT_FORWARD_DECLARE_CLASS(QActionGroup)
QT_FORWARD_DECLARE_CLASS(QMenu)
QT_FORWARD_DECLARE_CLASS(QSpinBox)

class GeneralToolbar : public QToolBar
{
    Q_OBJECT
private:
    CentralWidget* m_centralImage;
    QAction* openCameraAct;
    QAction* closeCameraAct;


public:
    GeneralToolbar(const QString &title, QWidget *parent);

public slots:
    void OpenCamera();
    void CloseCamera();

};

#endif // GENERALTOOLBAR_H
