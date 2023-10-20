#include<iostream>
using namespace std;

class Person{
public:
    virtual void display(){
        cout<<"I am a person"<<endl;
    }
};

class Student : public Person{
public:
    void display(){
        cout<<"I am a student"<<endl;
    }
};

class Teacher : public Person{
public:
    void display(){
        cout<<"I am a teacher"<<endl;
    }
};

int main(){
    Person *p;
    Student s;
    Teacher t;

    p=&s;
    p->display();

    p=&t;
    p->display();
    return 0;
}
