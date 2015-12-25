#include "student.h"

Student::Student() {

}

QString Student::getName() {
    return name;
}

QString Student::getAddress() {
    return address;
}

int Student::getTelephone() {
    return telephone;
}

int Student::getAge() {
    return age;
}

QString Student::getSex() {
    return sex;
}

int Student::getYearOfStudying() {
    return yearOfStudying;
}

void Student::setName(QString name) {
    Student::name = name;
}

void Student::setAddress(QString address) {
    Student::address = address;
}

void Student::setTelephone(int telephone) {
    Student::telephone = telephone;
}

void Student::setAge(int age) {
    Student::age = age;
}

void Student::setSex(QString sex) {
    Student::sex = sex;
}

void Student::setYearOfStudying(int yearOfStudying) {
    Student::yearOfStudying = yearOfStudying;
}
