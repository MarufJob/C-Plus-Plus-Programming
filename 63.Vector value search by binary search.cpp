#include <iostream>
#include <vector>
#include <algorithm> //// for std::sort
using namespace std;
int main() {
    
    //create vector, declare
    vector<int>arr;
    
    arr.push_back(111);
    arr.push_back(333);
    arr.push_back(57);
    arr.push_back(97);
    arr.push_back(19);
    
    // Sort the vector before using binary_search
    sort(arr.begin(), arr.end());

    //Search by binary search
    cout << "Search 57 by binary search = ";
    cout <<binary_search(arr.begin(), arr.end(), 57)<<endl;
    
    
    cout << "Search 55 by binary search = ";
    bool found = binary_search(arr.begin(), arr.end(), 55);
    cout << (found ? "Found" : "Not Found") << endl;
}
/*
Output: Search 57 by binary search = 1
        Search 55 by binary search = Not Found
*/