#include <iostream>
using namespace std;

// defining the default arguments
void display(char = '*', int = 7);

int main() {
    int count = 9;

    cout << "No argument passed: ";
    // *, 3 will be parameters
    display(); 
    
    cout << "First argument passed: ";
     // #, 3 will be parameters
    display('#'); 
    
    cout << "Both arguments passed: ";
    // $, 5 will be parameters
    display('$', count); 

    return 0;
}

void display(char c, int count) {
    for(int i = 1; i <= count; ++i)
    {
        cout << c;
    }
    cout << endl;
}

/*
output: No argument passed: *******
        First argument passed: #######
        Both arguments passed: $$$$$$$$$
*/