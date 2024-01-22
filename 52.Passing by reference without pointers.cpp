#include <iostream>
using namespace std;

// function definition to swap values
void swap(int &n1, int &n2) {
    cout << "\nBefore swapping" << endl;
    cout << "&n1 = " << &n1 << endl;
    cout << "&n2 = " << &n2 << endl;
    
    cout << "\nn1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;
    
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
    cout << "\nAfter swapping" << endl;
    cout << "&n1 = " << &n1 << endl;
    cout << "&n2 = " << &n2 << endl;
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;
}

int main() {

    // initialize variables
    int a = 1, b = 2;

    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;
    cout << "b = " << b << endl;
    cout << "&b = " << &b << endl;

    // call function to swap numbers
    swap(a, b);

    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;
    cout << "b = " << b << endl;
    cout << "&b = " << &b << endl;
    
    return 0;
}
/*
Output: Before swapping
        a = 1
        &a = 0x7fffff1c308c
        b = 2
        &b = 0x7fffff1c3088
        
        Before swapping
        &n1 = 0x7fffff1c308c
        &n2 = 0x7fffff1c3088
        
        n1 = 1
        n2 = 2
        
        After swapping
        &n1 = 0x7fffff1c308c
        &n2 = 0x7fffff1c3088
        n1 = 2
        n2 = 1
        
        After swapping
        a = 2
        &a = 0x7fffff1c308c
        b = 1
        &b = 0x7fffff1c3088
*/