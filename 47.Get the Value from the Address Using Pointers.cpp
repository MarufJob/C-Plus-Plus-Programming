// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int* pointVar, var;
    //int *pointVar, var;
    var = 5;

    // assign address of var to pointVar
    pointVar = &var;
    
    // access value pointed by pointVar
    cout << "value stored in that address= " << *pointVar << endl;   // Output: 5
    cout << "address of var= "<<pointVar;

    return 0;
}
/*
Output: value stored in that address= 5
        address of var= 0x7ffd5585d244
*/