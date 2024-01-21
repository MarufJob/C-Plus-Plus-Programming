#include <iostream>

using namespace std;

void display(char *);
void display(string);

int main()
{
    string str1;
    char str[100];

    cout << "Enter a string: ";
    getline(cin, str1);

    cout << "Enter another string: ";
    cin.get(str, 100, '\n');

    display(str1);
    display(str);
    return 0;
}

void display(char s[])
{
    cout << "Entered char array is: " << s << endl;
}

void display(string s)
{
    cout << "Entered string is: " << s << endl;
}
/*
Input:  Enter a string: My name is Maruf.
        Enter another string: I am a programmar.
Output: Entered string is: My name is Maruf.
        Entered char array is: I am a programmar.
*/