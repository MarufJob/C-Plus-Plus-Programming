// C++ Program to insert and display data entered by using pointer notation.

#include <iostream>
using namespace std;

int main() {
    float arr[5];
    
   // Insert data using pointer notation
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; ++i) {

        // store input number in arr[i]
        cin >> *(arr + i) ;
        //cin >> *(arr + i) ; == cin >> arr[i];
    }

    // Display data using pointer notation
    cout << "Displaying data: " << endl;
    for (int i = 0; i < 5; ++i) {

        // display value of arr[i]
        cout << "arr["<< i<<"] array element= " << *(arr + i) << endl ;

    }
    
     // Display memory addresses using pointer variable notation
    cout << "Displaying data: " << endl;
    for (int i = 0; i < 5; ++i) {

        // display value of arr[i]
        cout << "arr["<< i<<"] memory addresses= " << (arr + i) << endl ;
        //cout << *(arr + i) << endl ; == cout << arr[i] << endl ;
    }

    return 0;
}
/*
Input: Enter 5 numbers: 1.1 2.2 3.3 4.4 5.5

Output: Displaying data: 
        arr[0] array element= 1.1
        arr[1] array element= 2.2
        arr[2] array element= 3.3
        arr[3] array element= 4.4
        arr[4] array element= 5.5
        Displaying data: 
        arr[0] memory addresses= 0x7ffeb48686a0
        arr[1] memory addresses= 0x7ffeb48686a4
        arr[2] memory addresses= 0x7ffeb48686a8
        arr[3] memory addresses= 0x7ffeb48686ac
        arr[4] memory addresses= 0x7ffeb48686b0
*/