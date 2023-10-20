#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string name;
    int id,n;
    ofstream MyWriteFile;
    MyWriteFile.open("student_details.txt",ios::out|ios::app);
    for(int i=1;i<=3;i++){
        cout<<"Enter your name: ";
        getline(cin,name);
        MyWriteFile<<name<<"\t";

        cout<<"Enter your id:";
        cin>>id;
        MyWriteFile<<id<<endl;
        cin.ignore();
    }

    MyWriteFile.close();
    cout<<"Data is stored";
}
