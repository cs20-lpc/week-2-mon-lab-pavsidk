#include <iostream>
#include <string>
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class Student {
    private:
        string* name;
        int* age;
    public:
        Student();
        ~Student();
    
        void setName(string s);
        void  setAge(int i);
        string getName() const;
        int getAge() const;

};

#endif