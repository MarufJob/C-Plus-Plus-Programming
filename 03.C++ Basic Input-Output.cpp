#include <iostream>
using namespace std;

int main() {
    
    int num;
    
    cout << "Enter an integer: ";
    cin >> num;   // Taking input
    cout << "The number is: " << num<<endl;
    
    char a;
    //int num;

    cout << "Enter a character and an integer: ";
    cin >> a >> num;    // Taking multiple input character and an integer.

    cout << "Character: " << a << endl;
    cout << "Number: " << num << endl;
    
    cout << "Work complete\nby Maruf" << endl; // \n use for a new line

    
    return 0;
}

/*
Input:Enter an integer: 555
Output:The number is: 555
Input:Enter a character and an integer: M 777
Output: Character: M
        Number: 777
        Work complete 
        by Maruf
*/
