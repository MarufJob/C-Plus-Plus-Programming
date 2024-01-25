#include <iostream>
using namespace std;

// function prototype with pointers as parameters
void value(int, int&, int*);

int main() {

    // initialize variables
    int a = 1, b = 3, c = 5;

    cout << "Before value call function" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    
    // call function by passing variable addresses
    value(a, b, &c);

    cout << "\nAfter value call function" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    return 0;
}

// function definition to swap numbers
void value(int n1, int &n2, int *n3) {
    cout << "\nBefore value change in function" << endl;
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;
    cout << "*n3 = " << *n3 << endl;
    
    n1 = 7;
    n2 = 9;
    *n3 = 11;
    
    cout << "\nAfter value change in function" << endl;
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;
    cout << "*n3 = " << *n3 << endl;
}


/*
Output: Before value call function
        a = 1
        b = 3
        c = 5
        
        Before value change in function
        n1 = 1
        n2 = 3
        *n3 = 5
        
        After value change in function
        n1 = 7
        n2 = 9
        *n3 = 11
        
        After value call function
        a = 1
        b = 9
        c = 11
*/