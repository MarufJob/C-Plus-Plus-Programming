#include <iostream>
using namespace std;

int main() {
    int a, b;
    a = 7;
    b = 2;
    
    
    cout << "a =7, b = 2" << endl<< endl;

    // printing the sum of a and b
    cout << "a + b = " << (a + b) << endl;

    // printing the difference of a and b
    cout << "a - b = " << (a - b) << endl;

    // printing the product of a and b
    cout << "a * b = " << (a * b) << endl;

    // printing the division of a by b
    cout << "a / b = " << (a / b) << endl;

    // printing the modulo of a by b
    cout << "a % b = " << (a % b)  << endl<< endl;
    
    
    
    a+=b;
     // printing the sum of a and b
    cout << "a+=b = " << a << endl;
    
    a=7;
    a-=b;
    // printing the difference of a and b
    cout << "a-=b = " << a << endl;
    
    a=7;
    a*=b;
    // printing the product of a and b
    cout << "a*=b = " << a << endl;
    
    a=7;
    a/=b;
    //printing the division of a by b
    cout << "a/=b = " << a << endl;
    
    
    a=7;
    a%=b;
    //printing the modulo of a by b
    cout << "a%=b = " << a << endl;
    
    return 0;
}

/*
Output: a =7, b = 2

        a + b = 9
        a - b = 5
        a * b = 14
        a / b = 3
        a % b = 1
        
        a+=b = 9
        a-=b = 5
        a*=b = 14
        a/=b = 3
        a%=b = 1
*/