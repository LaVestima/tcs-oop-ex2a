#include "studentlist.h"

Student *studentNode;
Student *newNode;

Student StudentList::getFirstItem() {
    return *firstItem;
}

void StudentList::setFirstItem(Student firstItem) {
    *StudentList::firstItem = firstItem;
}

QString StudentList::displayList() {
    Student *currentItem;
    QString listString = "";

    currentItem = firstItem;
    while (currentItem != NULL) {
        listString += currentItem->getName();
        break; //remove
    }

    return listString;
}

void StudentList::addItem(Student *tempStudent) {
    Student *newStudent = new Student;

    newStudent->setName(tempStudent->getName());
    newStudent->setAddress(tempStudent->getAddress());
    newStudent->setAge(tempStudent->getAge());
    newStudent->setNextItem(firstItem);

    firstItem = newStudent;
}

void StudentList::appendItem(Student *tempStudent) {

}

void StudentList::deleteItem(int rowNumber) {
    Student *currentItem = firstItem;
    Student *previousItem = firstItem;
    Student *toDeleteItem;

    if (rowNumber == 0) {
        toDeleteItem = firstItem;
        firstItem = firstItem->getNextItem();
    }
    else {
        for (int i = 0; i < rowNumber; i++) {
            currentItem = currentItem->getNextItem();
            if (i > 0) {
                previousItem = previousItem->getNextItem();
            }
        }
        toDeleteItem = currentItem;
        previousItem->setNextItem(currentItem->getNextItem());
    }
    delete toDeleteItem;
}

int StudentList::findItem(QString findWord) {
    Student *currentItem = firstItem;
    int findRowNumber = -1;

    while (currentItem) {
        findRowNumber++;
        if (currentItem->getName() == findWord) {
            return findRowNumber;
        }

        currentItem = currentItem->getNextItem();
    }
    return -1;
}
