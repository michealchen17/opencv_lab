
#include <QApplication>
#include "mainwindow.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication QApp(argc, argv);
    QIcon appIcon(QPixmap("./opencv-logo.png"));
    QApp.setWindowIcon(appIcon);

    MainWindow Window;
    Window.setWindowTitle("opencv laboratory");
    Window.setWindowIcon(appIcon);
    Window.show();



    QApp.exec();


    return 0;
}
