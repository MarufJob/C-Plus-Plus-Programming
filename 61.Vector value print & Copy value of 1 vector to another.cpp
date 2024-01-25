#include <iostream>
#include <vector>
using namespace std;
int main() {
    
    //create vector, declare
    vector<int>arr;
    
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(7);
    arr.push_back(9);
    
    //Vector value print
    cout <<arr[0]<<endl;
    cout <<arr.front()<<endl;
    cout <<arr.back()<<endl;
    cout <<arr[arr.size()-1]<<endl;
    
    //Copy value of 1 vector to another
    vector<int>vec;
    
    vec=arr;
    cout <<"\nvec size = "<<vec.size()<<endl;
    
    //Print arr value
    cout <<"\nPrint arr value = ";
    for(auto It = arr.begin() ; It!=arr.end() ; It++)
    cout << *It <<" ";
    
    cout <<endl;
    
    cout <<"\nPrint arr value = ";
    for(auto i: arr)
    cout << i <<" ";
    
    cout <<endl;
    
    cout <<"\nPrint arr value = ";
    for(int It = 0 ; It<arr.size() ; It++)
    cout << arr[It] <<" ";

}

/*
Output: 1
        1
        9
        9
        
        vec size = 5
        
        Print arr value = 1 3 5 7 9 
        
        Print arr value = 1 3 5 7 9 
        
        Print arr value = 1 3 5 7 9 
*/