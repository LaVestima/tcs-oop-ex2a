#ifndef STUDENT_H
#define STUDENT_H

#include <QMainWindow>

class Student {
private:
    QString name;
    QString address;
    int telephone;
    int age;
    QString sex;
    int yearOfStudying;

public:
    Student();

    QString getName();

    QString getAddress() {
        return address;
    }

    int getTelephone() {
        return telephone;
    }

    int getAge() {
        return age;
    }

    QString getSex() {
        return sex;
    }

    int getYearOfStudying() {
        return yearOfStudying;
    }

    void setName() {

    }
};

#endif // STUDENT_H
