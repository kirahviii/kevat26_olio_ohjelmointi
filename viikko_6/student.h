#pragma once
#include <iostream>

using std::cout, std::cin, std::endl, std::string;

class Student{
    public:
        Student(string n, int a);
        void setAge(int);
        void setName(string);
        string getName();
        int getAge();
        void printStudentInfo();
    private:
        string name;
        int age;
};

Student::Student(string n, int a){
    name = n;
    age = a;
}

void Student::setName(string n){
    name = n;
}

string Student::getName(){
    return name;
}

void Student::setAge(int a){
    age = a;
}

int Student::getAge(){
    return age;
}

void Student::printStudentInfo(){
    cout << name << ": " << age << endl;
}