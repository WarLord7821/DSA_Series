#include <iostream>
using namespace std;

int revarr(int arr[], int sz){
    int start = 0;
    int end = sz-1;
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    return 0;
}

int main(){
    cout<<"Enter Size of Array:"<<endl;
    int sz = 0;
    cin>>sz;  
    int arr[sz];

    for(int i=0;i<sz;i++){
        cout<<"Enter Element "<<i<<": ";
        cin>>arr[i];
    }


    revarr(arr,sz);

    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }

}