#include <QCoreApplication>
#include <QApplication>
#include <QtWidgets/QWidget>
#include <QTextCodec>
#include <ui_mainwindow.h>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    //QTextCodec::setCodecForTr(QTextCodec::codecForLocale());

    QApplication a(argc, argv);
    CMainWindow *mw = new CMainWindow;

    mw->show();
    return a.exec();
}
