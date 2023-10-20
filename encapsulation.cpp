#include<iostream>
using namespace std;

class Student{
private:
    string name;
public:
    void setName(string name){ //setter
        this->name=name;
    }
    string getName(){ //getter
        return name;
    }
};

int main(){
    Student obj;
    obj.setName("khalid");
    string x=obj.getName();
    cout<<x;
    return 0;
}
