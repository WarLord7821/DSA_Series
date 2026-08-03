#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec1;
    vector<int> vec2 = {1, 2, 3, 4, 5};
    cout<<vec2[0]<<endl;
    vector<int> vec3(3,0);

    cout<<vec3[0]<<endl;
    cout<<vec3[1]<<endl;
    //cout<<vec3[5]<<endl;
    return 0;
}