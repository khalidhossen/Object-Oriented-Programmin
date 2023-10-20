#include<iostream>
using namespace std;

class Myclass{
public:
    void myfunction(){
        cout<<"Some content in the parent class."<<endl;
    }
};
class Myotherclass{
public:
    void myotherfunction(){
        cout<<"Some content int the child class"<<endl;
    }
};
class Mychildclass : public Myclass, public Myotherclass{
public:
    void mychildfunction(){
        cout<<"Child class";
    }

};



int main(){
    Mychildclass Myobj;
    Myobj.myfunction();
    Myobj.myotherfunction();
    Myobj.mychildfunction();
    return 0;
}
