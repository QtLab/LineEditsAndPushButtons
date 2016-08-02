#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->firstLineEdit->setFocus();
    active = FIRST;
}


Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_secondLineEdit_returnPressed()
{
    active = SECOND;
    qDebug() << active;
}

void Dialog::on_thirdLineEdit_returnPressed()
{
    active = THIRD;
    qDebug() << active;
}

void Dialog::on_firstLineEdit_returnPressed()
{
    active = FIRST;
    qDebug() << active;
}

void Dialog::clear_focus()
{
    ui->onePushButton->clearFocus();
    ui->twoPushButton->clearFocus();
    ui->threePushButton->clearFocus();
    ui->fourPushButton->clearFocus();
    ui->fivePushButton->clearFocus();
    ui->sixPushButton->clearFocus();
    ui->sevenPushButton->clearFocus();
    ui->eightPushButton->clearFocus();
    ui->ninePushButton->clearFocus();
}

void Dialog::keyPressEvent(QKeyEvent *e)
{
    if (e->key() == Qt::Key_Return){
        qDebug() << "Enter pressed";
        clear_focus();
    }
}

void Dialog::on_onePushButton_clicked()
{
    add_ifactive("1");
}

void Dialog::on_twoPushButton_clicked()
{
    add_ifactive("2");
}


void Dialog::on_threePushButton_clicked()
{
    add_ifactive("3");
}


void Dialog::on_fourPushButton_clicked()
{
    add_ifactive("4");
}


void Dialog::on_fivePushButton_clicked()
{
    add_ifactive("5");
}


void Dialog::on_sixPushButton_clicked()
{
    add_ifactive("6");
}


void Dialog::on_sevenPushButton_clicked()
{
    add_ifactive("7");
}


void Dialog::on_eightPushButton_clicked()
{
    add_ifactive("8");
}


void Dialog::on_ninePushButton_clicked()
{
    add_ifactive("9");
}



void Dialog::add_ifactive(QString input)
{
    if (active == FIRST) add_text(ui->firstLineEdit, input);
    else if (active == SECOND) add_text(ui->secondLineEdit, input);
    else add_text(ui->thirdLineEdit, input);
    clear_focus();
}

void Dialog::add_text(QLineEdit *lineEdit, QString text)
{
    QString t = lineEdit->text();
    t.append(text);
    lineEdit->setText(t);
}

void Dialog::on_clearButton_clicked()
{
    ui->firstLineEdit->clear();
    ui->secondLineEdit->clear();
    ui->thirdLineEdit->clear();
}
