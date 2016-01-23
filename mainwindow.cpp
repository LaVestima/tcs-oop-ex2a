#include "mainwindow.h"
#include "student.h"
#include "studentlist.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    student = new Student;
    studentList = new StudentList;
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_addItemButton_clicked() {
    Student *newStudent = new Student;

    QString newName = ui->nameLineEdit->text();
    QString newAddress = ui->addressLineEdit->text();
    QString newAge = ui->ageLineEdit->text();

    if (newName == "" || newAddress == "" || newAge == "") {
        ui->errorLabel->setText("All of the field must be filled!");
    }
    else {
        newStudent->setName(newName);
        newStudent->setAddress(newAddress);
        newStudent->setAge(newAge);

        studentList->addItem(newStudent);

        //ui->listWidget->addItem(new QListWidgetItem(newName + " " + newAddress + " " + newAge)); // chnage to whole object
        ui->listWidget->insertItem(0, new QListWidgetItem(newName + " " + newAddress + " " + newAge));


        ui->errorLabel->setText("");
        ui->nameLineEdit->setText("");
        ui->addressLineEdit->setText("");
        ui->ageLineEdit->setText("");
    }
    delete newStudent;
}

void MainWindow::on_displayListButton_clicked() {
    studentList->displayList();
}

void MainWindow::on_appendItemButton_clicked() {
    Student *newStudent = new Student;

    QString newName = ui->nameLineEdit->text();
    QString newAddress = ui->addressLineEdit->text();
    QString newAge = ui->ageLineEdit->text();

    if (newName == "" || newAddress == "" || newAge == "") {
        ui->errorLabel->setText("All of the field must be filled!");
    }
    else {
        newStudent->setName(newName);
        newStudent->setAddress(newAddress);
        newStudent->setAge(newAge);

        studentList->appendItem(newStudent);

        //ui->listWidget->insertItem(0, new QListWidgetItem(newName + " " + newAddress + " " + newAge));
        ui->listWidget->addItem(new QListWidgetItem(newName + " " + newAddress + " " + newAge));

        ui->errorLabel->setText("");
        ui->nameLineEdit->setText("");
        ui->addressLineEdit->setText("");
        ui->ageLineEdit->setText("");
    }
    delete newStudent;
}

void MainWindow::on_findItemButton_clicked() {
    QString findWord = ui->findItemLineEdit->text();
    int findRowNumber = studentList->findItem(findWord);

    if (findWord == "") {
        ui->errorLabel->setText("No word entered!");
    }
    else {
        ui->createListButton->setText(QString::number(findRowNumber));
        ui->listWidget->setCurrentRow(findRowNumber);
        ui->errorLabel->setText(QString::number(ui->listWidget->count()));
    }
}

void MainWindow::on_deleteItemButton_clicked() {
    int rowNumber = ui->listWidget->currentRow();

    if (rowNumber == -1) {
        ui->errorLabel->setText("No item selected!");
    }
    else {
        studentList->deleteItem(rowNumber);

        ui->listWidget->takeItem(rowNumber);
        ui->listWidget->setCurrentRow(-1);
    }
}
