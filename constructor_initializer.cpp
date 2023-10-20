#include<iostream>
#include<conio.h>
using namespace std;

class Student{
public:

    const int admissionfee;
    const int examfee;
    int rent;
    Student(int x,int y,int z)
    : admissionfee(x),examfee(y)
    {
        cout<<admissionfee<<endl;
        cout<<examfee<<endl;

        rent=z;
        cout<<rent<<endl;
    }
};

int main(){
    Student obj(12000,500,100);
}
