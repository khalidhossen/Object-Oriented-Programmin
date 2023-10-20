#include<iostream>
#include<conio.h>
using namespace std;

class Car{
public:
    string brand;
    string model;
    int year;
    Car(string x,string y,int z);
};
Car :: Car(string x,string y,int z){
        brand=x;
        model=y;
        year=z;
}



int main(){
    Car myobj("BMW","X5",1990);
    Car myobj1("ODY","H12",200);
    cout<<myobj.brand<<"  "<<myobj.model<<"  "<<myobj.year<<endl;
    cout<<myobj1.brand<<"  "<<myobj1.model<<"  "<<myobj1.year;

}
