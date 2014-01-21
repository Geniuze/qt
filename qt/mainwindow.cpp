#include <QtGui>
#include <ui_mainwindow.h>
#include <QMessageBox>
#include <QFileDialog>
#include <QDebug>
#include <QTextStream>
#include "mainwindow.h"

CMainWindow::CMainWindow()
{
    ui = new Ui::MainWindow;
    ui->setupUi(this);
    QObject::connect(ui->file_new, SIGNAL(triggered()), this, SLOT(on_file_new_triggered()));
    QObject::connect(ui->file_quit, SIGNAL(triggered()), this, SLOT(on_file_quit_triggered()));
    QObject::connect(ui->file_save, SIGNAL(triggered()), this, SLOT(on_file_save_triggered()));
    //QObject::connect(ui->textBrowser, SIGNAL(textChanged()), this, SLOT(on_textBrowser_textChanged()));
    isSaved = false;
    needSave = false;
    curFile = tr("未命名.txt");
    //curFile = "hello";
    setWindowTitle(curFile);
}
void CMainWindow::do_file_new()
{
    do_file_saveOrNot();
    isSaved = false;

    curFile =tr("未命名.txt");
    setWindowTitle(curFile);
    ui->textBrowser->clear();
    ui->textBrowser->setVisible(true);
}

void CMainWindow::do_file_save()
{
    if (isSaved)
        saveFile(curFile);
    else
        do_file_saveAs();
}

void CMainWindow::do_file_saveOrNot()
{
    if (!ui->textBrowser->document()->isEmpty() && ui->textBrowser->document()->isModified())
    {
        QMessageBox box;
        box.setWindowTitle(tr("警告"));
        box.setIcon(QMessageBox::Warning);
        box.setText(curFile +tr("文件有未保存修改，是否保存？"));
        box.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        if (box.exec() == QMessageBox::Yes)
        {
            do_file_save();
        }
        //needSave = false;
    }
}

void CMainWindow::do_file_saveAs()
{
    //qDebug() << "curFile" << curFile << "\n" ;
    QString filename = QFileDialog::getSaveFileName(this,tr("另存为"), curFile);
    if (!filename.isEmpty())
        saveFile(filename);
}

bool CMainWindow::saveFile(const QString &filename)
{
    QFile file(filename);
    if (!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this,tr("保存文件"), tr("无法保存文件 %1:\n%2").arg(filename).arg(file.errorString()));
        return false;
    }
    QTextStream s(&file);
    s << ui->textBrowser->toPlainText();
    isSaved = true;
    curFile = QFileInfo(filename).canonicalFilePath();
    setWindowTitle(curFile);
    return true;
}



void CMainWindow::on_file_new_triggered()
{
    do_file_new();
}

void CMainWindow::on_file_save_triggered()
{
    do_file_save();
}


void CMainWindow::on_file_quit_triggered()
{
    do_file_saveOrNot();
    QApplication::quit();
}

void CMainWindow::on_textBrowser_textChanged()
{
    needSave = true;
}
