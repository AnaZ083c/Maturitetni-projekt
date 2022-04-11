/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *All;
    QPushButton *KuzaPazi;
    QPushButton *GlLestvica;
    QPushButton *LStar;
    QPushButton *HNight;
    QPushButton *G2;
    QPushButton *F2;
    QPushButton *E2;
    QPushButton *D2;
    QPushButton *C2;
    QPushButton *H_;
    QPushButton *A_;
    QPushButton *G_;
    QPushButton *F_;
    QPushButton *E_;
    QPushButton *D_;
    QPushButton *C_;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(923, 242);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/AK.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
        Dialog->setStyleSheet(QStringLiteral("background-color:rgb(143, 143, 143);"));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 181, 191));
        QFont font;
        font.setPointSize(10);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QStringLiteral("color: white;"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 143, 151));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        All = new QPushButton(layoutWidget);
        All->setObjectName(QStringLiteral("All"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        All->setFont(font1);
        All->setStyleSheet(QStringLiteral("color: black; background-color: white;"));

        verticalLayout->addWidget(All);

        KuzaPazi = new QPushButton(layoutWidget);
        KuzaPazi->setObjectName(QStringLiteral("KuzaPazi"));
        KuzaPazi->setFont(font1);
        KuzaPazi->setStyleSheet(QStringLiteral("color: black; background-color: white;"));

        verticalLayout->addWidget(KuzaPazi);

        GlLestvica = new QPushButton(layoutWidget);
        GlLestvica->setObjectName(QStringLiteral("GlLestvica"));
        GlLestvica->setFont(font1);
        GlLestvica->setStyleSheet(QStringLiteral("color: black; background-color: white;"));

        verticalLayout->addWidget(GlLestvica);

        LStar = new QPushButton(layoutWidget);
        LStar->setObjectName(QStringLiteral("LStar"));
        LStar->setFont(font1);
        LStar->setStyleSheet(QStringLiteral("color: black; background-color: white;"));

        verticalLayout->addWidget(LStar);

        HNight = new QPushButton(layoutWidget);
        HNight->setObjectName(QStringLiteral("HNight"));
        HNight->setFont(font1);
        HNight->setStyleSheet(QStringLiteral("color: black; background-color: white;"));

        verticalLayout->addWidget(HNight);

        G2 = new QPushButton(Dialog);
        G2->setObjectName(QStringLiteral("G2"));
        G2->setGeometry(QRect(200, 30, 51, 181));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        G2->setFont(font2);
        G2->setStyleSheet(QStringLiteral("background-color: rgb(0, 85, 255)"));
        F2 = new QPushButton(Dialog);
        F2->setObjectName(QStringLiteral("F2"));
        F2->setGeometry(QRect(260, 30, 51, 181));
        F2->setFont(font2);
        F2->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255);"));
        E2 = new QPushButton(Dialog);
        E2->setObjectName(QStringLiteral("E2"));
        E2->setGeometry(QRect(320, 30, 51, 181));
        E2->setFont(font2);
        E2->setStyleSheet(QStringLiteral("background-color:rgb(170, 85, 255);"));
        D2 = new QPushButton(Dialog);
        D2->setObjectName(QStringLiteral("D2"));
        D2->setGeometry(QRect(380, 30, 51, 181));
        D2->setFont(font2);
        D2->setStyleSheet(QStringLiteral("background-color:rgb(214, 0, 0);"));
        C2 = new QPushButton(Dialog);
        C2->setObjectName(QStringLiteral("C2"));
        C2->setGeometry(QRect(440, 30, 51, 181));
        C2->setFont(font2);
        C2->setStyleSheet(QStringLiteral("background-color:rgb(255, 138, 21);"));
        H_ = new QPushButton(Dialog);
        H_->setObjectName(QStringLiteral("H_"));
        H_->setGeometry(QRect(500, 30, 51, 181));
        H_->setFont(font2);
        H_->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 127);"));
        A_ = new QPushButton(Dialog);
        A_->setObjectName(QStringLiteral("A_"));
        A_->setGeometry(QRect(560, 30, 51, 181));
        A_->setFont(font2);
        A_->setStyleSheet(QStringLiteral("background-color:rgb(85, 170, 0);"));
        G_ = new QPushButton(Dialog);
        G_->setObjectName(QStringLiteral("G_"));
        G_->setGeometry(QRect(620, 30, 51, 181));
        G_->setFont(font2);
        G_->setStyleSheet(QStringLiteral("background-color:rgb(0,85, 255);"));
        F_ = new QPushButton(Dialog);
        F_->setObjectName(QStringLiteral("F_"));
        F_->setGeometry(QRect(680, 30, 51, 181));
        F_->setFont(font2);
        F_->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255);"));
        E_ = new QPushButton(Dialog);
        E_->setObjectName(QStringLiteral("E_"));
        E_->setGeometry(QRect(740, 30, 51, 181));
        E_->setFont(font2);
        E_->setStyleSheet(QStringLiteral("background-color:rgb(170, 85, 255);"));
        D_ = new QPushButton(Dialog);
        D_->setObjectName(QStringLiteral("D_"));
        D_->setGeometry(QRect(800, 30, 51, 181));
        D_->setFont(font2);
        D_->setStyleSheet(QStringLiteral("background-color:rgb(214, 0, 0);"));
        C_ = new QPushButton(Dialog);
        C_->setObjectName(QStringLiteral("C_"));
        C_->setGeometry(QRect(860, 30, 51, 181));
        C_->setFont(font2);
        C_->setStyleSheet(QStringLiteral("background-color:rgb(255, 138, 21);"));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 140, 16, 31));
        QFont font3;
        font3.setPointSize(14);
        label->setFont(font3);
        label->setStyleSheet(QLatin1String("text-align: center;\n"
"background: transparent;"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(280, 140, 16, 31));
        label_2->setFont(font3);
        label_2->setStyleSheet(QLatin1String("text-align: center;\n"
"background: transparent;"));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(340, 140, 16, 31));
        label_3->setFont(font3);
        label_3->setStyleSheet(QLatin1String("text-align: center;\n"
"background: transparent;"));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(400, 140, 16, 31));
        label_4->setFont(font3);
        label_4->setStyleSheet(QLatin1String("text-align: center;\n"
"background: transparent;"));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(460, 140, 16, 31));
        label_5->setFont(font3);
        label_5->setStyleSheet(QLatin1String("text-align: center;\n"
"background: transparent;"));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(520, 140, 16, 31));
        label_6->setFont(font3);
        label_6->setStyleSheet(QLatin1String("text-align: center;\n"
"background: transparent;"));
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(580, 140, 16, 31));
        label_7->setFont(font3);
        label_7->setStyleSheet(QLatin1String("text-align: center;\n"
"background: transparent;"));
        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(640, 140, 16, 31));
        label_8->setFont(font3);
        label_8->setStyleSheet(QLatin1String("text-align: center;\n"
"background: transparent;"));
        label_9 = new QLabel(Dialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(700, 140, 16, 31));
        label_9->setFont(font3);
        label_9->setStyleSheet(QLatin1String("text-align: center;\n"
"background: transparent;"));
        label_10 = new QLabel(Dialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(760, 140, 16, 31));
        label_10->setFont(font3);
        label_10->setStyleSheet(QLatin1String("text-align: center;\n"
"background: transparent;"));
        label_11 = new QLabel(Dialog);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(820, 140, 16, 31));
        label_11->setFont(font3);
        label_11->setStyleSheet(QLatin1String("text-align: center;\n"
"background: transparent;"));
        label_12 = new QLabel(Dialog);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(880, 140, 16, 31));
        label_12->setFont(font3);
        label_12->setStyleSheet(QLatin1String("text-align: center;\n"
"background: transparent;"));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("Dialog", "Pesmi", nullptr));
        All->setText(QApplication::translate("Dialog", "Vse", nullptr));
        KuzaPazi->setText(QApplication::translate("Dialog", "Ku\305\276a pazi", nullptr));
        GlLestvica->setText(QApplication::translate("Dialog", "Glasbena lestvica", nullptr));
        LStar->setText(QApplication::translate("Dialog", "Sveti, sveti zvezdica", nullptr));
        HNight->setText(QApplication::translate("Dialog", "Sveta no\304\215", nullptr));
        G2->setText(QApplication::translate("Dialog", "G", nullptr));
        F2->setText(QApplication::translate("Dialog", "F", nullptr));
        E2->setText(QApplication::translate("Dialog", "E", nullptr));
        D2->setText(QApplication::translate("Dialog", "D", nullptr));
        C2->setText(QApplication::translate("Dialog", "C", nullptr));
        H_->setText(QApplication::translate("Dialog", "H", nullptr));
        A_->setText(QApplication::translate("Dialog", "A", nullptr));
        G_->setText(QApplication::translate("Dialog", "G", nullptr));
        F_->setText(QApplication::translate("Dialog", "F", nullptr));
        E_->setText(QApplication::translate("Dialog", "E", nullptr));
        D_->setText(QApplication::translate("Dialog", "D", nullptr));
        C_->setText(QApplication::translate("Dialog", "C", nullptr));
        label->setText(QApplication::translate("Dialog", "q", nullptr));
        label_2->setText(QApplication::translate("Dialog", "w", nullptr));
        label_3->setText(QApplication::translate("Dialog", "e", nullptr));
        label_4->setText(QApplication::translate("Dialog", "r", nullptr));
        label_5->setText(QApplication::translate("Dialog", "t", nullptr));
        label_6->setText(QApplication::translate("Dialog", "z", nullptr));
        label_7->setText(QApplication::translate("Dialog", "a", nullptr));
        label_8->setText(QApplication::translate("Dialog", "s", nullptr));
        label_9->setText(QApplication::translate("Dialog", "d", nullptr));
        label_10->setText(QApplication::translate("Dialog", "f", nullptr));
        label_11->setText(QApplication::translate("Dialog", "g", nullptr));
        label_12->setText(QApplication::translate("Dialog", "h", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
