// C++ Program to display marks of 6 students

#include <iostream>
using namespace std;

// declare function to display marks
// take a 1d array as parameter
//Range Based for Loop in function
void display( int (&m)[6]) {
    cout << "Displaying marks: " << endl;

    // display array elements    
    for (int i = 0; i < 6; ++i) {
        cout << "Student " << i + 1 << ": " << m[i] << endl;
    }
    
    //Range Based for Loop
    cout << endl <<"Displaying marks: ";
    for (int n : m) {
        cout << n << " ";
    }
    
    
}

int main() {

    // declare and initialize an array
    int marks[6] = {77, 66, 89, 71, 89, 50};
    
    // for (int n : marks) {
    //     cout << n << " ";
    // }
    // cout << endl;
    
    
    // call display function
    // pass array as argument
    display(marks);

    return 0;
}

/*
Output: Displaying marks: 
        Student 1: 88
        Student 2: 76
        Student 3: 90
        Student 4: 61
        Student 5: 69
        Student 6: 50
        
        Displaying marks: 88 76 90 61 69 50 
*/