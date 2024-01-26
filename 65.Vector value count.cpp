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
    arr.push_back(97);
    arr.push_back(97);
    arr.push_back(19);
    
    //Print arr value
    cout <<"\nPrint arr value = ";
    for(auto It = arr.begin() ; It!=arr.end() ; It++)
    cout << *It <<" ";
    cout <<endl;
  
  
    cout <<"vector 97 value count = ";
    cout <<count(arr.begin(),arr.end(),97)<<endl;
  
    cout <<"vector 97 value count = ";
    int countValue = count(arr.begin(), arr.end(), 97);
    cout << countValue << endl;
  
}

/*
Output: Print arr value = 111 333 57 97 97 97 19 
        vector 97 value count = 3
        vector 97 value count = 3
*/