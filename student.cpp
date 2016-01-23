#include "student.h"

Student::Student() {

}

QString Student::getName() {
    return name;
}

QString Student::getAddress() {
    return address;
}

QString Student::getAge() {
    return age;
}

Student* Student::getNextItem() {
    return nextItem;
}

void Student::setName(QString name) {
    Student::name = name;
}

void Student::setAddress(QString address) {
    Student::address = address;
}

void Student::setAge(QString age) {
    Student::age = age;
}

void Student::setNextItem(Student *next) {
    nextItem = next;
}
