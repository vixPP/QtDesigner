#ifndef WELCOMWINDOW_H
#define WELCOMWINDOW_H

#include <QDialog>

namespace Ui {
class WelcomWindow;
}

class WelcomWindow : public QDialog
{
    Q_OBJECT

public:
    explicit WelcomWindow(QWidget *parent = nullptr);
    ~WelcomWindow();

private:
    Ui::WelcomWindow *ui;
};

#endif // WELCOMWINDOW_H
