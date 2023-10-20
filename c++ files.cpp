#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string name;
    ofstream MyWriteFile;
    MyWriteFile.open("filename.txt",ios::out|ios::app);
    cout<<"Enter your name: ";
    getline(cin,name);
    MyWriteFile<<"Welcome "<<name<<endl;
    MyWriteFile.close();
    cout<<"Data is stored";
}

