#include <iostream>
using namespace std;

int main() {
    int numbers[3][3];

    cout << "Enter 9 numbers: " << endl;

    // Storing user input in the array
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> numbers[i][j];
        }
    }

    cout << "The numbers are: " << endl;

    //  Printing array elements
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "numbers[" << i << "][" << j << "]: " << numbers[i][j] << endl;
        }
    }
    
    
    cout << endl;
    cout << "The numbers are: " << endl;
    //  Printing array elements
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "numbers[" << i << "][" << j << "]: " << numbers[i][j] << " ";
        }
        cout << endl;
    }
    
    
    cout << endl;
    cout << "The numbers are: " << endl;
    //  Printing array elements
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << numbers[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
/*
Input:  Enter  9 numbers: 
        1 2 3 4 5 6 7 8 9
             
Output: The numbers are: 
        numbers[0][0]: 1
        numbers[0][1]: 2
        numbers[0][2]: 3
        numbers[1][0]: 4
        numbers[1][1]: 5
        numbers[1][2]: 6
        numbers[2][0]: 7
        numbers[2][1]: 8
        numbers[2][2]: 9

        The numbers are: 
        numbers[0][0]: 1 numbers[0][1]: 2 numbers[0][2]: 3 
        numbers[1][0]: 4 numbers[1][1]: 5 numbers[1][2]: 6 
        numbers[2][0]: 7 numbers[2][1]: 8 numbers[2][2]: 9 

        The numbers are: 
        1 2 3 
        4 5 6 
        7 8 9 
*/