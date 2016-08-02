#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDebug>
#include <QLineEdit>
#include <QKeyEvent>


enum activeLineEdit {FIRST, SECOND, THIRD};

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
    void on_secondLineEdit_returnPressed();

    void on_thirdLineEdit_returnPressed();

    void on_firstLineEdit_returnPressed();

    void on_onePushButton_clicked();
    void on_twoPushButton_clicked();
    void on_threePushButton_clicked();
    void on_fourPushButton_clicked();
    void on_fivePushButton_clicked();
    void on_sixPushButton_clicked();
    void on_sevenPushButton_clicked();
    void on_eightPushButton_clicked();
    void on_ninePushButton_clicked();

    void add_text(QLineEdit* lineEdit, QString text);

    void add_ifactive(QString input);

    void clear_focus(void);

    void keyPressEvent(QKeyEvent *e);

    void on_clearButton_clicked();

private:
    Ui::Dialog *ui;
    activeLineEdit active;
};

#endif // DIALOG_H
