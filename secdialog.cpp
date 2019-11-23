#include "secdialog.h"
#include "ui_secdialog.h"

SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
}

SecDialog::~SecDialog()
{
    delete ui;
}
void SecDialog::Recalculate()
{
    ui->OutputValue->clear();
    double input = ui->InputValue->value();
    switch (ui->comboBox->currentIndex())
    {
    case 0://PLN
        input *=1;
        break;
    case 1://USD
        input *= 3.82;
        break;
    case 2://EUR
        input *= 4.25;
        break;
    case 3://CHF
        input *= 3.86;
        break;
    case 4://GBP
        input *= 4.95;
        break;
    default:
        break;
    }
    switch (ui->comboBox_2->currentIndex())
    {
    case 0://PLN
        input *=1;
        break;
    case 1://USD
        input /= 3.82;
        break;
    case 2://EUR
        input /= 4.25;
        break;
    case 3://CHF
        input /= 3.86;
        break;
    case 4://GBP
        input /= 4.95;
        break;
    default:
        break;
    }
    ui->OutputValue->setValue(input);
}






void SecDialog::on_InputValue_valueChanged(double arg1)
{
    Recalculate();
}

void SecDialog::on_comboBox_currentIndexChanged(int index)
{
    Recalculate();
}

void SecDialog::on_comboBox_2_currentIndexChanged(int index)
{
    Recalculate();
}

void SecDialog::on_pushButton_clicked()
{
   // Qmessa

}
