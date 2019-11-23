#ifndef LOGINAPP_H
#define LOGINAPP_H

#include <QMainWindow>
#include "secdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class loginApp; }
QT_END_NAMESPACE

class loginApp : public QMainWindow
{
    Q_OBJECT

public:
    loginApp(QWidget *parent = nullptr);
    ~loginApp();

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::loginApp *ui;
    SecDialog *secdialog;
};
#endif // LOGINAPP_H
