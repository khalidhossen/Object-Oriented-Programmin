#include<iostream>
using namespace std;

class Shape{
public:
    double d1,d2;
    Shape(double d1,double d2){
        this->d1=d1;
        this->d2=d2;
    }
    virtual double area(){
        return 0;
    }
};

class Triangle : public Shape{
public:
    Triangle(double d1,double d2)
    : Shape(d1,d2)
    {
    }
    double area(){
        return 0.2*d1*d2;
    }
};

class Rectangle : public Shape{
public:
    Rectangle(double d1,double d2)
    :Shape(d1,d2)
    {
    }
    double area(){
        return d1*d2;
    }
};
int main(){
    Shape *p;
    Triangle t(10,20);
    Rectangle r(10,20);

    p=&t;
    cout<<"Triangle area:"<<" "<<p->area()<<endl;
    p=&r;
    cout<<"Rectangle area:"<<" "<<p->area()<<endl;

    return 0;
}
