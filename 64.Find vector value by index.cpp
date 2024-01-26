#include <iostream>
#include <vector>
#include <algorithm> // for std::sort
using namespace std;

int main() {

    // Create vector
    vector<int> arr;

    arr.push_back(111);
    arr.push_back(333);
    arr.push_back(57);
    arr.push_back(97);
    arr.push_back(19);
    
    //Print arr value
    cout <<"\nPrint arr value = ";
    for(auto It = arr.begin() ; It!=arr.end() ; It++)
    cout << *It <<" ";
    cout <<endl;
    
    //Find vector value by index
    cout <<"vector 57 value index = ";
    cout <<find(arr.begin(),arr.end(),57)-arr.begin()<<endl;

    cout <<"vector 02 index value = ";
    auto It= find(arr.begin(),arr.end(),57);
    cout <<*It<<endl;
    return 0;
}

/*
Output: Print arr value = 111 333 57 97 19 
        vector 57 value index = 2
        vector 02 index value = 57
*/
