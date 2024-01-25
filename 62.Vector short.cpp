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
    
    //Print arr value
    cout <<"\nPrint arr value = ";
    for(auto It = arr.begin() ; It!=arr.end() ; It++)
    cout << *It <<" ";
    cout <<endl;
    
    //Sort & Print arr value
    //Sort in decreasing order
    sort(arr.begin(),arr.end(), greater<int>());
    cout <<"\nPrint arr value = ";
    for(auto i: arr)
    cout << i <<" ";
    cout <<endl;
    
    //Sort in increasing order
    sort(arr.begin(),arr.end());
    cout <<"\nPrint arr value = ";
    for(auto It = arr.begin() ; It!=arr.end() ; It++)
    cout << *It <<" ";
    cout <<endl;
    
    //Sort in decreasing order
    sort(arr.rbegin(),arr.rend());
    cout <<"\nPrint arr value = ";
    for(int It = 0 ; It<arr.size() ; It++)
    cout << arr[It] <<" ";

}

/*
Output: Print arr value = 111 333 57 97 19 

        Print arr value = 333 111 97 57 19 
        
        Print arr value = 19 57 97 111 333 
        
        Print arr value = 333 111 97 57 19 
*/