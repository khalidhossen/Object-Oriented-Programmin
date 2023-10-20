#include<iostream>
using namespace std;

class Person{
public:
    string name;
    double cgp;
    void display1(){
        cout<<"Name:"<<name<<endl;
        cout<<"CGP:"<<cgp<<endl;
    }
};
class Student : public Person{
public:
    int id;
    void display2(){
        cout<<"ID:"<<id<<endl;
        display1();
    }
};

int main(){
    Student s1;
    s1.name="khalid";
    s1.cgp=3.20;
    s1.id=101;
    s1.display2();
    return 0;
}
