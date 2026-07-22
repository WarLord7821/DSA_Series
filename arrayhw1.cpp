#include <iostream>
using namespace std;

int main(){

int n = 0;
cout<<"Enter Size of Array:"<<endl;
cin>>n;

int arr[n];

for(int i=0;i<n;i++){
    cout<<"Enter Element "<<i<<": ";
    cin>>arr[i];
}


int max = INT_MIN;
int min = INT_MAX;
int max_index = 0;
int min_index = 0;

for(int i = 0;i<n;i++){
    if(arr[i]>max){
        max = arr[i];
        max_index = i;
    }
    if(arr[i]<min){
        min = arr[i];
        min_index = i;
    }
}

swap(arr[max_index],arr[min_index]);

cout<<"Array after swapping max and min elements:"<<endl;
for(int i=0;i<n;i++){ 
cout<<arr[i]<<" ";

}
}