#include <iostream>
using namespace std;


void printunique(int arr[], int n){
    cout<<"Unique Elements in the Array are:"<<endl;
    for(int i=0;i<n;i++){
        bool isUnique = true;
        for(int j=i;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                isUnique = false;
                break;
            }
        }
        if(isUnique){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
    int n = 0;
    cout<<"Enter Size of Array:"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter Elements of Array:"<<endl;
    for(int i=0;i<n;i++){  
        cin>>arr[i];
    }


    printunique(arr,n);



}