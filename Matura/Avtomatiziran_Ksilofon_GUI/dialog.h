#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QSerialPort>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_KuzaPazi_clicked();

    void playMusic(QString);

    void on_GlLestvica_clicked();

    void on_LStar_clicked();

    void on_HNight_clicked();

    void on_All_clicked();

    void on_G2_clicked();

    void on_F2_clicked();

    void on_E2_clicked();

    void on_D2_clicked();

    void on_C2_clicked();

    void on_H__clicked();

    void on_A__clicked();

    void on_G__clicked();

    void on_F__clicked();

    void on_E__clicked();

    void on_D__clicked();

    void on_C__clicked();

private:
    Ui::Dialog *ui;

    // Port setup for Arduino
    QSerialPort *arduino;
    static const quint16 arduino_uno_vendor_id = 10755;
    static const quint16 arduino_uno_product_id = 67;
    QString arduino_port;
    bool arduino_available;
};

#endif // DIALOG_H
