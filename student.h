#ifndef STUDENT_H
#define STUDENT_H

#include <QMainWindow>

class Student {
private:
    QString name;
    QString address;
    QString age;
    Student *nextItem;

public:
    Student();
    QString getName();
    QString getAddress();
    QString getAge();
    Student* getNextItem();
    void setName(QString);
    void setAddress(QString);
    void setAge(QString);
    void setNextItem(Student*);
};

#endif // STUDENT_H
