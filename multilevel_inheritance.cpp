#include<iostream>
using namespace std;

class Myfunction{
public:
    void myfunction(){
        cout<<"This is the my function"<<endl;
    }
};
class Mychildfunction : public Myfunction{
public:
    void myfunction1(){
        cout<<"This is the my child function"<<endl;
    }
};
class Mygrandchildfunction : public Mychildfunction{
public:
    void myfunction2(){
        cout<<"This is the my grand child function";
    }

};

int main(){
    Mygrandchildfunction obj;
    obj.myfunction();
    obj.myfunction1();
    obj.myfunction2();
    return 0;
}
