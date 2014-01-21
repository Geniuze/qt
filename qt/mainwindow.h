#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <ui_mainwindow.h>

class CMainWindow : public QMainWindow
{
    public:
        CMainWindow();

private slots:
        void on_file_new_triggered();

        void on_file_save_triggered();

        void on_file_quit_triggered();

private:
        bool isSaved;
        QString curFile;
        void do_file_new();
        void do_file_save();
        void do_file_saveOrNot();
        void do_file_saveAs();
        Ui::MainWindow *ui;
        bool saveFile(const QString &filename);

};

#endif // MAINWINDOW_H
