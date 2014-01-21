#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <ui_mainwindow.h>

class CMainWindow : public QMainWindow
{
    Q_OBJECT
public:
        CMainWindow();
        ~CMainWindow()
        {

        }

private slots:
        void on_file_new_triggered();

        void on_file_save_triggered();

        void on_file_quit_triggered();

        void on_textBrowser_textChanged();

private:
        bool isSaved;
        bool needSave;
        QString curFile;
        void do_file_new();
        void do_file_save();
        void do_file_saveOrNot();
        void do_file_saveAs();
        Ui::MainWindow *ui;
        bool saveFile(const QString &filename);

};

#endif // MAINWINDOW_H
