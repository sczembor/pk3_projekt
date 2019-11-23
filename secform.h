#ifndef SECFORM_H
#define SECFORM_H

#include <QWidget>

namespace Ui {
class SecForm;
}

class SecForm : public QWidget
{
    Q_OBJECT

public:
    explicit SecForm(QWidget *parent = nullptr);
    ~SecForm();

private:
    Ui::SecForm *ui;
};

#endif // SECFORM_H
