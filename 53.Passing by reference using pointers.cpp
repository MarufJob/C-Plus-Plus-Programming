#include <iostream>
using namespace std;

// function prototype with pointers as parameters
void swap(int*, int*);

int main() {

    // initialize variables
    int a = 1, b = 2;

    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;
    cout << "b = " << b << endl;
    cout << "&b = " << &b << endl;
    // call function by passing variable addresses
    swap(&a, &b);

    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;
    cout << "b = " << b << endl;
    cout << "&b = " << &b << endl;
    return 0;
}

// function definition to swap numbers
void swap(int* n1, int* n2) {
    cout << "\nBefore swapping" << endl;
    cout << "*n1 = " << *n1 << endl;
    cout << "n1 = " << n1 << endl;
    cout << "*n2 = " << *n2 << endl;
    cout << "n2 = " << n2 << endl;
    
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    
    cout << "\nAfter swapping" << endl;
    cout << "*n1 = " << *n1 << endl;
    cout << "n1 = " << n1 << endl;
    cout << "*n2 = " << *n2 << endl;
    cout << "n2 = " << n2 << endl;
}
/*
Output: Before swapping
        a = 1
        &a = 0x7ffe89b6b94c
        b = 2
        &b = 0x7ffe89b6b948
        
        Before swapping
        *n1 = 1
        n1 = 0x7ffe89b6b94c
        *n2 = 2
        n2 = 0x7ffe89b6b948
        
        After swapping
        *n1 = 2
        n1 = 0x7ffe89b6b94c
        *n2 = 1
        n2 = 0x7ffe89b6b948
        
        After swapping
        a = 2
        &a = 0x7ffe89b6b94c
        b = 1
        &b = 0x7ffe89b6b948
*/