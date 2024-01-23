#include <iostream>
using namespace std;

int main() {

     // declare an int pointer
     int* pointInt;
    
     // declare a float pointer
     float* pointFloat;
    
     // dynamically allocate memory
     pointInt = new int;
     pointFloat = new float;
    
     // assigning value to the memory
     *pointInt = 45;
     *pointFloat = 45.45;
    
     cout << *pointInt << endl;
     cout << *pointFloat << endl;
    
     // deallocate the memory
     delete pointInt;
     delete pointFloat;
     
    //  pointInt = nullptr;
    //  pointFloat = nullptr;
     
     cout << *pointInt << endl;
     cout << *pointFloat << endl;
     return 0;
}

/*
Output: 45
        45.45
        0
        3.95457e-38
*/

/*
    //Why output *pointFloat =  3.95457e-38?
    
    In the provided code, after deallocating the memory using the delete operator, accessing the values through *pointInt and *pointFloat results in undefined behavior. The memory has been released, and trying to dereference the pointers after deletion can lead to unpredictable outcomes.
    
    // deallocate the memory
    delete pointInt;
    delete pointFloat;
    
    // Trying to access the values after deallocation
    cout << *pointInt << endl;    // Undefined behavior
    cout << *pointFloat << endl;  // Undefined behavior

    Once you've used delete on a pointer, the memory it points to is no longer valid, and accessing it can produce unexpected results. The output values could be garbage values or anything else, and it's essentially undefined behavior.

    If you need to use the pointers after deletion, you should set them to nullptr to avoid accidental access:
    
    
    // deallocate the memory
    delete pointInt;
    delete pointFloat;
    
    // Set pointers to nullptr
    pointInt = nullptr;
    pointFloat = nullptr;
    
    // Now, accessing the pointers won't result in undefined behavior
    cout << *pointInt << endl;    // This is safe, but the value is indeterminate
    cout << *pointFloat << endl;  // This is safe, but the value is indeterminate

    
    Remember to be cautious with dynamic memory management to prevent memory leaks and undefined behavior. Always set pointers to nullptr after using delete and avoid accessing memory that has been deallocated.
    
*/