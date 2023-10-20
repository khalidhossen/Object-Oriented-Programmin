#include<iostream>
using namespace std;

template<class myTemplate> //same data type
myTemplate add(myTemplate x,myTemplate y){
    return x+y;
}
template<class myTemplate1, class myTemplate2> //when the two parameters data type are different
myTemplate1 add(myTemplate1 x,myTemplate2 y){
    return x+y;
}
int main(){
    cout<<add(5,6)<<endl;
    cout<<add(3.5,7);
    return 0;
}
