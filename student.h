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
    QString getAddress();
    int getTelephone();
    int getAge();
    QString getSex();
    int getYearOfStudying();
    void setName(QString);
    void setAddress(QString);
    void setTelephone(int);
    void setAge(int);
    void setSex(QString);
    void setYearOfStudying(int);
};

#endif // STUDENT_H
