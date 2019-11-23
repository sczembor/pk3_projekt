#include "loginapp.h"
#include "ui_loginapp.h"

#include <QMessageBox>

loginApp::loginApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::loginApp)
{
    ui->setupUi(this);
}

loginApp::~loginApp()
{
    delete ui;
}


void loginApp::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "test" && password == "test")
    {
         QMessageBox::information(this, "Login", "User name and password is correct");
         secdialog = new SecDialog(this);
         hide();
         secdialog->show();
    }
    else
    {
        QMessageBox::warning(this, "Login", "User name and password is not correct");
    }
}
