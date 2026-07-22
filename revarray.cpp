#include <iostream>
using namespace std;

int main(){
    cout<<"Enter Size of Array:"<<endl;
    int sz = 0;
    cin>>sz;
    int arr[sz];
    for(int i=0;i<sz;i++){
        cout<<"Enter Element "<<i<<": ";
        cin>>arr[i];
    }
    cout<<"Reversed Array:"<<endl;
    for(int i=0;i<sz/2;i++){
        int temp = arr[i];
        arr[i] = arr[sz-i-1];
        arr[sz-i-1] = temp;
        
    }
    cout<<"The Reversed Array is:"<<endl;
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}