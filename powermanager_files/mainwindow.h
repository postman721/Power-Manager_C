#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QString>
#include <QProcess>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_lock_clicked();
    void keyPressEvent(QKeyEvent *events);


    void on_logout_clicked();

    void on_suspend_clicked();

    void on_reboot_clicked();

    void on_off_clicked();

private:
    Ui::MainWindow *ui;
    QProcess *execute;
};

#endif // MAINWINDOW_H
