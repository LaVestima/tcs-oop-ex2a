#ifndef STUDENTLIST_H
#define STUDENTLIST_H

#include <QMainWindow>
#include "student.h"

class StudentList {
private:
    Student *firstItem;
public:
    StudentList() {firstItem = NULL;}

    Student getFirstItem();
    void setFirstItem(Student);

    QString displayList();
    void addItem(Student *);
    void appendItem(Student *);
    void deleteItem(int);
    void editItem();
    int findItem(QString);
};

#endif // STUDENTLIST_H
