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


////cin.get(str);
The code you've provided has an issue with the usage of cin.get() for reading a string. The correct way to read a string using cin is getline(cin, str) instead of cin.get(str). The corrected code is as follows:

getline(cin, str);: This line correctly reads a line of input from the standard input (cin) into the string variable str. The getline function is used for reading a line of text, allowing the input to include spaces.

cin.get(str);: This is not the correct way to read a string. The get function is typically used for reading a single character or a specified number of characters from the input.

By using getline(cin, str), you can properly read a line of input into the str variable, allowing for spaces and capturing the entire line of input.

*/
