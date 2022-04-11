#include "dialog.h"
#include "ui_dialog.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QtWidgets>

// ARDUINO SET UP ------------------------------------
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    arduino_available = false;
    arduino_port = "";
    arduino = new QSerialPort;

    foreach (const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()) {
        if (serialPortInfo.hasVendorIdentifier() && serialPortInfo.hasProductIdentifier()) {
            if (serialPortInfo.vendorIdentifier() == arduino_uno_vendor_id) {
                if (serialPortInfo.productIdentifier() == arduino_uno_product_id) {
                    arduino_port = serialPortInfo.portName();
                    arduino_available = true;
                }
            }
        }
    }

    if (arduino_available) {
        // odpre in konfigurira port
        arduino->setPortName(arduino_port);
        arduino->open(QSerialPort::WriteOnly);
        arduino->setBaudRate(QSerialPort::Baud9600);
        arduino->setDataBits(QSerialPort::Data8);
        arduino->setParity(QSerialPort::NoParity);
        arduino->setStopBits(QSerialPort::OneStop);
        arduino->setFlowControl(QSerialPort::NoFlowControl);
    }

    else {
        // opozorilo
        QMessageBox::warning(this, "Port error", "Arduina ni bilo mogoče najti!");
    }

    ui->G2->setShortcut(QKeySequence(Qt::Key_Q));
    ui->F2->setShortcut(QKeySequence(Qt::Key_W));
    ui->E2->setShortcut(QKeySequence(Qt::Key_E));
    ui->D2->setShortcut(QKeySequence(Qt::Key_R));
    ui->C2->setShortcut(QKeySequence(Qt::Key_T));
    ui->H_->setShortcut(QKeySequence(Qt::Key_Z));
    ui->A_->setShortcut(QKeySequence(Qt::Key_A));
    ui->G_->setShortcut(QKeySequence(Qt::Key_S));
    ui->F_->setShortcut(QKeySequence(Qt::Key_D));
    ui->E_->setShortcut(QKeySequence(Qt::Key_F));
    ui->D_->setShortcut(QKeySequence(Qt::Key_G));
    ui->C_->setShortcut(QKeySequence(Qt::Key_H));

}

Dialog::~Dialog()
{
    if (arduino->isOpen())
        arduino->close();

    delete ui;
}


// GUI PART ------------------------------------------
// Izbor pesmi
void Dialog::on_KuzaPazi_clicked()
{
    Dialog::playMusic(QString("1"));
}

void Dialog::on_GlLestvica_clicked()
{
    Dialog::playMusic(QString("2"));
}

void Dialog::on_LStar_clicked()
{
    Dialog::playMusic(QString("3"));
}

void Dialog::on_HNight_clicked()
{
    Dialog::playMusic(QString("4"));
}

void Dialog::on_All_clicked()
{
    Dialog::playMusic(QString("5"));
}

// Tipke
void Dialog::on_G2_clicked()
{
    Dialog::playMusic(QString("a"));
}

void Dialog::on_F2_clicked()
{
    Dialog::playMusic(QString("s"));
}

void Dialog::on_E2_clicked()
{
    Dialog::playMusic(QString("d"));
}

void Dialog::on_D2_clicked()
{
    Dialog::playMusic(QString("f"));
}

void Dialog::on_C2_clicked()
{
    Dialog::playMusic(QString("g"));
}

void Dialog::on_H__clicked()
{
    Dialog::playMusic(QString("h"));
}

void Dialog::on_A__clicked()
{
    Dialog::playMusic(QString("j"));
}

void Dialog::on_G__clicked()
{
    Dialog::playMusic(QString("k"));
}

void Dialog::on_F__clicked()
{
    Dialog::playMusic(QString("l"));
}

void Dialog::on_E__clicked()
{
    Dialog::playMusic(QString(126));
}

void Dialog::on_D__clicked()
{
    Dialog::playMusic(QString(125));
}

void Dialog::on_C__clicked()
{
    Dialog::playMusic(QString(96));
}

// FUNKCIJA ZA ZAPIS V ARDUINO
void Dialog::playMusic(QString command)
{
    if (arduino->isWritable())
        arduino->write(command.toStdString().c_str());

    else
        qDebug() << "Couldn't write to serial!!!";
}
