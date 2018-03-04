#include "mainwindow.h"
#include "ui_mainwindow.h"

/* Power-Manager (C++ version).
Author: JJ Posti <techtimejourney.net> 2018.
Released under GPL v.2. */

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lock_clicked()
{
    execute = new QProcess(this);
    execute->start("slock");
}


void MainWindow::keyPressEvent(QKeyEvent *events){

    //Esc event == Quit the program
    if(events->key()==Qt::Key_Escape){
        this->close();
    }
};

void MainWindow::on_logout_clicked()
{
    execute = new QProcess(this);
    execute->start("slock");
}

void MainWindow::on_suspend_clicked()
{
    execute = new QProcess(this);
    execute->start("gksudo pm-suspend");
}

void MainWindow::on_reboot_clicked()
{
    execute = new QProcess(this);
    execute->start("gksudo reboot");
}

void MainWindow::on_off_clicked()
{
    execute = new QProcess(this);
    execute->start("gksudo poweroff");
}
