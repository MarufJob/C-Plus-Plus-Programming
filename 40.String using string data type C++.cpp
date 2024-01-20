#include <iostream>
using namespace std;

int main()
{
    // Declaring a string object
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    //cin >> str;

    cout << "You entered: " << str << endl;
    return 0;
}
/*
Input: Enter a string: My name is Maruf.
Output: You entered: My name is Maruf.

In this program, a string str is declared. Then the string is asked from the user.

Instead of using cin>> or cin.get() function, you can get the entered line of text using getline().

getline() function takes the input stream as the first parameter which is cin and str as the location of the line to be stored.

//cin >> str;
Enter a string: My name is maruf
You entered: My

*/