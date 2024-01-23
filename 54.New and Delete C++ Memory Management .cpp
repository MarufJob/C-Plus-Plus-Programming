#include <iostream>
using namespace std;
int main() {
       // declare an int pointer
    int* pointVar;
    
    // dynamically allocate memory
    // for an int variable 
    pointVar = new int;
    
    // assign value to the variable memory
    *pointVar = 45;
    
    // print the value stored in memory
    cout << *pointVar<<endl; // Output: 45
    //memory address
    cout << pointVar<<endl;; // Output: 0x141ceb0
    
    // deallocate the memory
    delete pointVar;
    cout << *pointVar<<endl;; // Output: 0
    //memory address
    cout << pointVar<<endl;; // Output: 0x141ceb0
    
    return 0;
}

/*
Output: 45
        0x781eb0
        0
        0x781eb0
*/