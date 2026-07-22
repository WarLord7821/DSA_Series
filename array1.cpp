#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Size of array: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int index_smallest = -1;
    int index_largest = -1;

    for(int i = 0; i<n;i++){

        if(arr[i]<smallest){
            smallest = min(smallest, arr[i]);
            index_smallest = i;
        }
        if(arr[i]>largest){
            largest = max(largest, arr[i]);
            index_largest = i;
        }    
    
    }

    cout<<"The smallest number is: "<<smallest<<" at index: "<<index_smallest<<endl;
    cout<<"The largest number is: "<<largest<<" at index: "<<index_largest<<endl;

    return 0;
}