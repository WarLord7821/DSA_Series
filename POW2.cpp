#include <iostream>
using namespace std;

int main(){

    cout<<"Enter a number:"<<endl;
    int a = 0;
    cin>>a;
    //a & a-1 works to tell if number is power of 2 or not
    if((a>0) && ((a & (a-1))==0)){
        cout<<"Number is a power of 2"<<endl;
    }
    else
    cout<<a<<" Not a power of 2"<<endl;
}