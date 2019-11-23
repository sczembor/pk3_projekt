#include "secform.h"
#include "ui_secform.h"

SecForm::SecForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SecForm)
{
    ui->setupUi(this);
}

SecForm::~SecForm()
{
    delete ui;
}
