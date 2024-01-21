#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inch;
};

int main() {
    Distance *ptr, d;

    ptr = &d;
    /*
    Since pointer ptr is pointing to variable d in this program, (*ptr).inch and d.inch are equivalent. Similarly, (*ptr).feet and d.feet are equivalent.
    
    However, if we are using pointers, it is far more preferable to access struct members using the -> operator, since the . operator has a higher precedence than the * operator.
    
    ptr->feet is same as (*ptr).feet
    ptr->inch is same as (*ptr).inc
    */
    
    cout << "Enter feet: ";
    cin >> ptr->feet;
    cout << "Enter inch: ";
    cin >> ptr->inch;
 
    cout << "Displaying information." << endl;
    cout << "Distance = " << (*ptr).feet << " feet " << (*ptr).inch << " inches";

    return 0;
}

/*
Input:  Enter feet: 6
        Enter inch: 3
Output: Displaying information.
        Distance = 6 feet 3 inches

Input:  Enter feet: 5
        Enter inch: 5
Output: Displaying information.
        Distance = 5 feet 5 inches
*/