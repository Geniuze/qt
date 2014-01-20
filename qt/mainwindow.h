#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class MainWindow : public QMainWindow
{
public:
    MainWindow();
private:
    bool isSaved;
    QString curFile;

};

#endif // MAINWINDOW_H
