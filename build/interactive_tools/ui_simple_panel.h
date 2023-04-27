/********************************************************************************
** Form generated from reading UI file 'simple_panel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLE_PANEL_H
#define UI_SIMPLE_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_two_button
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2_1;
    QPushButton *pushButton_2_2;
    QPushButton *pushButton_1_2;
    QLabel *label_row_3;
    QLabel *label_row_1;
    QPushButton *pushButton_1_1;
    QLabel *label_row_2;
    QPushButton *pushButton_2_3;
    QPushButton *pushButton_2_4;
    QPushButton *pushButton_3_1;
    QPushButton *pushButton_3_2;
    QPushButton *pushButton_3_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_status;

    void setupUi(QWidget *two_button)
    {
        if (two_button->objectName().isEmpty())
            two_button->setObjectName(QString::fromUtf8("two_button"));
        two_button->resize(302, 180);
        gridLayoutWidget = new QWidget(two_button);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 281, 121));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2_1 = new QPushButton(gridLayoutWidget);
        pushButton_2_1->setObjectName(QString::fromUtf8("pushButton_2_1"));
        pushButton_2_1->setMinimumSize(QSize(25, 25));
        pushButton_2_1->setMaximumSize(QSize(50, 25));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        pushButton_2_1->setFont(font);
        pushButton_2_1->setMouseTracking(false);
        pushButton_2_1->setAutoFillBackground(true);

        gridLayout->addWidget(pushButton_2_1, 1, 1, 1, 1);

        pushButton_2_2 = new QPushButton(gridLayoutWidget);
        pushButton_2_2->setObjectName(QString::fromUtf8("pushButton_2_2"));
        pushButton_2_2->setMinimumSize(QSize(25, 25));
        pushButton_2_2->setMaximumSize(QSize(50, 25));
        pushButton_2_2->setFont(font);
        pushButton_2_2->setMouseTracking(false);
        pushButton_2_2->setAutoFillBackground(true);

        gridLayout->addWidget(pushButton_2_2, 1, 2, 1, 1);

        pushButton_1_2 = new QPushButton(gridLayoutWidget);
        pushButton_1_2->setObjectName(QString::fromUtf8("pushButton_1_2"));
        pushButton_1_2->setMinimumSize(QSize(25, 25));
        pushButton_1_2->setMaximumSize(QSize(50, 25));
        pushButton_1_2->setFont(font);
        pushButton_1_2->setMouseTracking(false);
        pushButton_1_2->setAutoFillBackground(true);

        gridLayout->addWidget(pushButton_1_2, 0, 2, 1, 1);

        label_row_3 = new QLabel(gridLayoutWidget);
        label_row_3->setObjectName(QString::fromUtf8("label_row_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_row_3->sizePolicy().hasHeightForWidth());
        label_row_3->setSizePolicy(sizePolicy);
        label_row_3->setMinimumSize(QSize(100, 25));
        label_row_3->setMaximumSize(QSize(100, 25));
        label_row_3->setBaseSize(QSize(100, 25));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Chilanka"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        label_row_3->setFont(font1);
        label_row_3->setAlignment(Qt::AlignCenter);
        label_row_3->setWordWrap(false);

        gridLayout->addWidget(label_row_3, 2, 0, 1, 1);

        label_row_1 = new QLabel(gridLayoutWidget);
        label_row_1->setObjectName(QString::fromUtf8("label_row_1"));
        sizePolicy.setHeightForWidth(label_row_1->sizePolicy().hasHeightForWidth());
        label_row_1->setSizePolicy(sizePolicy);
        label_row_1->setMinimumSize(QSize(100, 25));
        label_row_1->setMaximumSize(QSize(100, 25));
        label_row_1->setBaseSize(QSize(100, 25));
        label_row_1->setFont(font1);
        label_row_1->setAlignment(Qt::AlignCenter);
        label_row_1->setWordWrap(false);

        gridLayout->addWidget(label_row_1, 0, 0, 1, 1);

        pushButton_1_1 = new QPushButton(gridLayoutWidget);
        pushButton_1_1->setObjectName(QString::fromUtf8("pushButton_1_1"));
        pushButton_1_1->setMinimumSize(QSize(25, 25));
        pushButton_1_1->setMaximumSize(QSize(50, 25));
        pushButton_1_1->setFont(font);
        pushButton_1_1->setMouseTracking(false);
        pushButton_1_1->setAutoFillBackground(true);

        gridLayout->addWidget(pushButton_1_1, 0, 1, 1, 1);

        label_row_2 = new QLabel(gridLayoutWidget);
        label_row_2->setObjectName(QString::fromUtf8("label_row_2"));
        sizePolicy.setHeightForWidth(label_row_2->sizePolicy().hasHeightForWidth());
        label_row_2->setSizePolicy(sizePolicy);
        label_row_2->setMinimumSize(QSize(100, 25));
        label_row_2->setMaximumSize(QSize(100, 25));
        label_row_2->setBaseSize(QSize(100, 25));
        label_row_2->setFont(font1);
        label_row_2->setAlignment(Qt::AlignCenter);
        label_row_2->setWordWrap(false);

        gridLayout->addWidget(label_row_2, 1, 0, 1, 1);

        pushButton_2_3 = new QPushButton(gridLayoutWidget);
        pushButton_2_3->setObjectName(QString::fromUtf8("pushButton_2_3"));
        pushButton_2_3->setMinimumSize(QSize(25, 25));
        pushButton_2_3->setMaximumSize(QSize(50, 25));
        pushButton_2_3->setFont(font);
        pushButton_2_3->setMouseTracking(false);
        pushButton_2_3->setAutoFillBackground(true);

        gridLayout->addWidget(pushButton_2_3, 1, 3, 1, 1);

        pushButton_2_4 = new QPushButton(gridLayoutWidget);
        pushButton_2_4->setObjectName(QString::fromUtf8("pushButton_2_4"));
        pushButton_2_4->setMinimumSize(QSize(25, 25));
        pushButton_2_4->setMaximumSize(QSize(50, 25));
        pushButton_2_4->setFont(font);
        pushButton_2_4->setMouseTracking(false);
        pushButton_2_4->setAutoFillBackground(true);

        gridLayout->addWidget(pushButton_2_4, 1, 4, 1, 1);

        pushButton_3_1 = new QPushButton(gridLayoutWidget);
        pushButton_3_1->setObjectName(QString::fromUtf8("pushButton_3_1"));
        pushButton_3_1->setMinimumSize(QSize(25, 25));
        pushButton_3_1->setMaximumSize(QSize(50, 25));
        pushButton_3_1->setFont(font);
        pushButton_3_1->setMouseTracking(false);
        pushButton_3_1->setAutoFillBackground(true);

        gridLayout->addWidget(pushButton_3_1, 2, 1, 1, 1);

        pushButton_3_2 = new QPushButton(gridLayoutWidget);
        pushButton_3_2->setObjectName(QString::fromUtf8("pushButton_3_2"));
        pushButton_3_2->setMinimumSize(QSize(25, 25));
        pushButton_3_2->setMaximumSize(QSize(50, 25));
        pushButton_3_2->setFont(font);
        pushButton_3_2->setMouseTracking(false);
        pushButton_3_2->setAutoFillBackground(true);

        gridLayout->addWidget(pushButton_3_2, 2, 2, 1, 1);

        pushButton_3_3 = new QPushButton(gridLayoutWidget);
        pushButton_3_3->setObjectName(QString::fromUtf8("pushButton_3_3"));
        pushButton_3_3->setMinimumSize(QSize(25, 25));
        pushButton_3_3->setMaximumSize(QSize(50, 25));
        pushButton_3_3->setFont(font);
        pushButton_3_3->setMouseTracking(false);
        pushButton_3_3->setAutoFillBackground(true);

        gridLayout->addWidget(pushButton_3_3, 2, 3, 1, 1);

        verticalLayoutWidget = new QWidget(two_button);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 140, 281, 31));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_status = new QLabel(verticalLayoutWidget);
        label_status->setObjectName(QString::fromUtf8("label_status"));
        sizePolicy.setHeightForWidth(label_status->sizePolicy().hasHeightForWidth());
        label_status->setSizePolicy(sizePolicy);
        label_status->setMinimumSize(QSize(135, 25));
        label_status->setMaximumSize(QSize(270, 50));
        label_status->setBaseSize(QSize(100, 25));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Ubuntu"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setWeight(50);
        label_status->setFont(font2);
        label_status->setAlignment(Qt::AlignCenter);
        label_status->setWordWrap(false);

        verticalLayout->addWidget(label_status);


        retranslateUi(two_button);

        QMetaObject::connectSlotsByName(two_button);
    } // setupUi

    void retranslateUi(QWidget *two_button)
    {
        two_button->setWindowTitle(QApplication::translate("two_button", "Form", nullptr));
        pushButton_2_1->setText(QApplication::translate("two_button", "1", nullptr));
        pushButton_2_2->setText(QApplication::translate("two_button", "2", nullptr));
        pushButton_1_2->setText(QApplication::translate("two_button", "2", nullptr));
        label_row_3->setText(QApplication::translate("two_button", "Vehicle", nullptr));
        label_row_1->setText(QApplication::translate("two_button", "Assembly Line", nullptr));
        pushButton_1_1->setText(QApplication::translate("two_button", "1", nullptr));
        label_row_2->setText(QApplication::translate("two_button", "Packaging Area", nullptr));
        pushButton_2_3->setText(QApplication::translate("two_button", "3", nullptr));
        pushButton_2_4->setText(QApplication::translate("two_button", "4", nullptr));
        pushButton_3_1->setText(QApplication::translate("two_button", "1", nullptr));
        pushButton_3_2->setText(QApplication::translate("two_button", "2", nullptr));
        pushButton_3_3->setText(QApplication::translate("two_button", "3", nullptr));
        label_status->setText(QApplication::translate("two_button", "Please select the goal pose", nullptr));
    } // retranslateUi

};

namespace Ui {
    class two_button: public Ui_two_button {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLE_PANEL_H
