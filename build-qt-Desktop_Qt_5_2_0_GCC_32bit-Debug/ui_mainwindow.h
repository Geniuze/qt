/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *file_open;
    QAction *file_new;
    QAction *file_save;
    QAction *file_quit;
    QAction *edit_copy;
    QAction *edit_paste;
    QAction *edit_cut;
    QAction *edit_undo;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QMenu *file;
    QMenu *edit;
    QMenu *help;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        file_open = new QAction(MainWindow);
        file_open->setObjectName(QStringLiteral("file_open"));
        file_new = new QAction(MainWindow);
        file_new->setObjectName(QStringLiteral("file_new"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/home/zz/work-src/github/qt/images/images/new.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        file_new->setIcon(icon);
        file_save = new QAction(MainWindow);
        file_save->setObjectName(QStringLiteral("file_save"));
        file_quit = new QAction(MainWindow);
        file_quit->setObjectName(QStringLiteral("file_quit"));
        edit_copy = new QAction(MainWindow);
        edit_copy->setObjectName(QStringLiteral("edit_copy"));
        edit_paste = new QAction(MainWindow);
        edit_paste->setObjectName(QStringLiteral("edit_paste"));
        edit_cut = new QAction(MainWindow);
        edit_cut->setObjectName(QStringLiteral("edit_cut"));
        edit_undo = new QAction(MainWindow);
        edit_undo->setObjectName(QStringLiteral("edit_undo"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        textBrowser->setTabChangesFocus(false);
        textBrowser->setReadOnly(false);

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 17));
        file = new QMenu(menubar);
        file->setObjectName(QStringLiteral("file"));
        edit = new QMenu(menubar);
        edit->setObjectName(QStringLiteral("edit"));
        help = new QMenu(menubar);
        help->setObjectName(QStringLiteral("help"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(file->menuAction());
        menubar->addAction(edit->menuAction());
        menubar->addAction(help->menuAction());
        file->addAction(file_new);
        file->addAction(file_open);
        file->addAction(file_save);
        file->addSeparator();
        file->addAction(file_quit);
        edit->addAction(edit_undo);
        edit->addSeparator();
        edit->addAction(edit_copy);
        edit->addAction(edit_cut);
        edit->addAction(edit_paste);
        toolBar->addAction(file_new);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        file_open->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200(&O)", 0));
        file_new->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272(&N)", 0));
        file_new->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        file_save->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", 0));
        file_quit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272(&Q)", 0));
        edit_copy->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266(&C)", 0));
        edit_paste->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264(&P)", 0));
        edit_cut->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207(&X)", 0));
        edit_undo->setText(QApplication::translate("MainWindow", "\346\222\244\346\266\210(&Z)", 0));
        file->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", 0));
        edit->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", 0));
        help->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
