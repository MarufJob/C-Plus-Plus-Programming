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
    arr.push_back(1);
    arr.push_back(77);
    arr.push_back(39);
    arr.push_back(19);
    
    //Print arr value
    cout <<"\nPrint arr value = ";
    for(auto It = arr.begin() ; It!=arr.end() ; It++)
    cout << *It <<" ";
    cout <<endl;
  
    cout <<"vector maximum value count = ";
    auto maximum = max_element(arr.begin(),arr.end());
    cout <<*maximum<<endl;
  
  
    cout <<"vector minimum value count = ";
    auto minimum = min_element(arr.begin(),arr.end());
    cout <<*minimum<<endl;
  
}

/*
Output: Print arr value = 111 333 57 97 1 77 39 19 
        vector maximum value count = 333
        vector minimum value count = 1
*/


/*
    cout <<"vector maximum value count = ";
    cout <<max_element(arr.begin(),arr.end())<<endl;    
    what is the wrong this?

The issue with your code is that max_element returns an iterator pointing to the maximum element, not the maximum element itself. To print the maximum value, you need to dereference the iterator. Here's the corrected code:

// Find and print the maximum value in the vector
    auto maxIt = max_element(arr.begin(), arr.end());
    if (maxIt != arr.end()) {
        cout << "Vector maximum value = " << *maxIt << endl;
    } else {
        cout << "Vector is empty" << endl;
    }
*/
