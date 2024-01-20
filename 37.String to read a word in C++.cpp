#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin >> str;
    cout << "You entered: " << str << endl;

    cout << "\nEnter another string: ";
    cin >> str;
    cout << "You entered: "<<str<<endl;

    return 0;
}

/*
Input: Enter a string: Maruf
Output: You entered: Maruf

Input: Enter another string: My name is Maruf
Output: You entered: My

Notice that, in the second example only "My" is displayed instead of "My name is Maruf".

This is because the extraction operator >> works as scanf() in C and considers a space " " has a terminating character.
*/