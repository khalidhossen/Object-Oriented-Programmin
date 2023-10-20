#include<iostream>
#include<conio.h>
using namespace std;
class Student{
public:

    int roll;
    double gpa;
    Student(int x, double y);
    ~Student(){
        cout<<"Destructor is printed here"<<endl;
    }
    void display(){
        cout<<roll<<"  "<<gpa<<endl;
    }
};
 Student :: Student(int x, double y){ //constructor define outside the class
     roll=x;
     gpa=y;
 }
int main(){
    Student alim(12,3.24);
    Student *p=&alim;//objectre
    p->display();
    return 0;
}
