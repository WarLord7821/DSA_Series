//Nested Loop for Intersection of Two Arrays

#include <iostream>
using namespace std;

int main(){
    int n = 0,m=0;
    cout<<"Enter Size of First Array:"<<endl;
    cin>>n;
    cout<<"Enter Size of Second Array:"<<endl;
    cin>>m; 

    int arr1[n],arr2[m];
    cout<<"Enter Elements of First Array:"<<endl;
    for(int i = 0; i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter Elements of Second Array:"<<endl;
    for(int i = 0; i<m;i++){
        cin>>arr2[i];
    }


    cout<<"Intersection of Two Arrays is:"<<endl;
    
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }
    return 0;
}