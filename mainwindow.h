#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <student.h>
#include <studentlist.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_addItemButton_clicked();

    void on_displayListButton_clicked();

    void on_appendItemButton_clicked();

    void on_findItemButton_clicked();

    void on_deleteItemButton_clicked();

private:
    Ui::MainWindow *ui;
    Student *student;
    StudentList *studentList;
};

#endif // MAINWINDOW_H
