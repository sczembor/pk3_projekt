#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecDialog(QWidget *parent = nullptr);
    ~SecDialog();

private slots:
    void Recalculate();


    void on_InputValue_valueChanged(double arg1);

    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_pushButton_clicked();

private:
    Ui::SecDialog *ui;
};

#endif // SECDIALOG_H
