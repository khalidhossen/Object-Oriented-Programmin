#include<iostream>
using namespace std;

class Average{
public:
    int avg;
    Average(int p,int q,int r,int s){
       avg=(p+q+r+s)/4;
       cout<<"average value is:"<<avg;

    }
};
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    Average ob(a,b,c,d);
}
