#include<iostream>
using namespace std;

class MobileUser{
public:
    virtual void sendMessage()=0;
};

class Rahim : public MobileUser{
public:
    void sendMessage(){
        cout<<"Hello i am rahim"<<endl;
    }
};

class Karim : public MobileUser{
public:
    void sendMessage(){
        cout<<"Hello i am karim"<<endl;
    }
};


int main(){
    MobileUser *p;
    Rahim r;
    Karim k;

    p=&r;
    p->call();
    p->sendMessage();

    p=&k;
    p->sendMessage();
    return 0;
}
