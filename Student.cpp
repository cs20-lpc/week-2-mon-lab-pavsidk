#include "Student.hpp"

void Student::setName(string s) {
    this->name = s;
}

void Student::setAge(int i) {
    this->age = i;
}

string Student::getName() {
    return this->name;
}

int Student::getAge() {
    return this->age;
}

