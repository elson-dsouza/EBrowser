/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_tab;
    QAction *actionDelete_tab;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *back;
    QPushButton *next;
    QLineEdit *URL;
    QCommandLinkButton *go;
    QPushButton *stop;
    QPushButton *reload;
    QTabWidget *tabWidget;
    QWidget *tab;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(556, 448);
        QIcon icon;
        icon.addFile(QStringLiteral("../Documents/ebrowser.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionNew_tab = new QAction(MainWindow);
        actionNew_tab->setObjectName(QStringLiteral("actionNew_tab"));
        actionDelete_tab = new QAction(MainWindow);
        actionDelete_tab->setObjectName(QStringLiteral("actionDelete_tab"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        back = new QPushButton(centralWidget);
        back->setObjectName(QStringLiteral("back"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(back->sizePolicy().hasHeightForWidth());
        back->setSizePolicy(sizePolicy);
        back->setMinimumSize(QSize(0, 0));
        back->setMaximumSize(QSize(30, 30));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../Qt/Examples/QtWebView/1.1/webview/minibrowser/images/left-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        back->setIcon(icon1);

        horizontalLayout->addWidget(back);

        next = new QPushButton(centralWidget);
        next->setObjectName(QStringLiteral("next"));
        next->setMaximumSize(QSize(30, 30));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../Qt/Examples/QtWebView/1.1/webview/minibrowser/images/right-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        next->setIcon(icon2);

        horizontalLayout->addWidget(next);

        URL = new QLineEdit(centralWidget);
        URL->setObjectName(QStringLiteral("URL"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(URL->sizePolicy().hasHeightForWidth());
        URL->setSizePolicy(sizePolicy1);
        URL->setMinimumSize(QSize(0, 30));
        URL->setMaximumSize(QSize(16777215, 30));
        URL->setClearButtonEnabled(true);

        horizontalLayout->addWidget(URL);

        go = new QCommandLinkButton(centralWidget);
        go->setObjectName(QStringLiteral("go"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(go->sizePolicy().hasHeightForWidth());
        go->setSizePolicy(sizePolicy2);
        go->setMinimumSize(QSize(30, 30));
        go->setMaximumSize(QSize(30, 30));

        horizontalLayout->addWidget(go);

        stop = new QPushButton(centralWidget);
        stop->setObjectName(QStringLiteral("stop"));
        stop->setMaximumSize(QSize(30, 30));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../Qt/Examples/QtWebView/1.1/webview/minibrowser/images/stop-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        stop->setIcon(icon3);

        horizontalLayout->addWidget(stop);

        reload = new QPushButton(centralWidget);
        reload->setObjectName(QStringLiteral("reload"));
        reload->setMaximumSize(QSize(30, 30));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../Qt/Examples/QtWebView/1.1/webview/minibrowser/images/refresh-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        reload->setIcon(icon4);

        horizontalLayout->addWidget(reload);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(0, 320));
        tabWidget->setTabsClosable(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 556, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew_tab);
        menuFile->addAction(actionDelete_tab);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "EBROWSER", 0));
        actionNew_tab->setText(QApplication::translate("MainWindow", "new tab", 0));
        actionDelete_tab->setText(QApplication::translate("MainWindow", "delete tab", 0));
        back->setText(QString());
        next->setText(QString());
        go->setText(QApplication::translate("MainWindow", "Go", 0));
        stop->setText(QString());
        reload->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "+", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "file", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
