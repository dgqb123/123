/********************************************************************************
** Form generated from reading UI file 'splitter.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLITTER_H
#define UI_SPLITTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SplitterClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SplitterClass)
    {
        if (SplitterClass->objectName().isEmpty())
            SplitterClass->setObjectName(QStringLiteral("SplitterClass"));
        SplitterClass->resize(600, 400);
        centralWidget = new QWidget(SplitterClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SplitterClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SplitterClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        SplitterClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SplitterClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SplitterClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SplitterClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SplitterClass->setStatusBar(statusBar);

        retranslateUi(SplitterClass);

        QMetaObject::connectSlotsByName(SplitterClass);
    } // setupUi

    void retranslateUi(QMainWindow *SplitterClass)
    {
        SplitterClass->setWindowTitle(QApplication::translate("SplitterClass", "Splitter", 0));
    } // retranslateUi

};

namespace Ui {
    class SplitterClass: public Ui_SplitterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLITTER_H
