#include <QCoreApplication>
#include <QApplication>
#include <QtWidgets/QWidget>
#include <QTextCodec>
#include <ui_mainwindow.h>

int main(int argc, char *argv[])
{
    //QTextCodec::setCodecForTr(QTextCodec::codecForLocale());

    QApplication a(argc, argv);
    QMainWindow *mw = new QMainWindow;
    Ui_MainWindow *mainwindow = new Ui_MainWindow;
    mainwindow->setupUi(mw);
    mw->show();
    return a.exec();
}
