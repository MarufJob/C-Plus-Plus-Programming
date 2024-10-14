#include <iostream>
using namespace std;

int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin.get(str, 100);
    // cin.ignore();// Consume the newline character after inputting the string
    // cin.getline(str,100);

    cout << "You entered: " << str << endl;
    return 0;
}
/*
Input: Enter a string: My name is Maruf.
Output: You entered: My name is Maruf.

//cin.get(str, 100);
To read the text containing blank space, cin.get function can be used. This function takes two arguments.

First argument is the name of the string (address of first element of string) and second argument is the maximum size of the array.

In the above program, str is the name of the string and 100 is the maximum size of the array.
*/



/*
cin.getline(str, 100);: এখানে cin.getline() ব্যবহার করা হয়েছে যা ইনপুট নেয়ার পরে নিউলাইন ক্যারেক্টার নিজে থেকেই বাদ দিয়ে দেয়, তাই আর cin.ignore() দরকার নেই।
*/
