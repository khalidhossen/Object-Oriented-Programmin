#include<iostream>
using namespace std;
int main(){
    while(1){
        try{
        int num1,num2;
        cout<<"Enter the number1: ";
        cin>>num1;

        cout<<"Enter the number2: ";
        cin>>num2;
        if(num2==0){
            throw num2;
        }

        double result=(double)num1/num2;
        cout<<"Result: "<<result<<endl;
       }
       catch(...){
            cout<<"Divide by zero is not possible"<<endl;
            cout<<"Try it again";
       }
    }
}
