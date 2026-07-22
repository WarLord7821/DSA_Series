#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    int marks[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter marks for student " << i + 1 << ": ";
        cin >> marks[i];
    }

    for(int i = 0; i < n; i++)
    {
        cout << "Marks for student " << i + 1 << ": " << marks[i] << endl;
    }

    return 0;
}