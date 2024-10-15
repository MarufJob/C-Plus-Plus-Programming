#include <iostream>
using namespace std;

void display(char *);
void display(string);

int main()
{
    char str[100];
    string str1;

    cout << "Enter a string: ";
    // cin.get(str, 100, '\n');
    // cin.get(str, 100);
    // cin.ignore(); // Consume the newline character after inputting the string
    cin.getline(str, 100);

    cout << "Enter another string: ";
    getline(cin, str1);

    display(str);
    display(str1);
    return 0;
}

void display(char stringVar[])
{
    cout << "Entered char array is: " << stringVar << endl;
}

void display(string stringVar)
{
    cout << "Entered string is: " << stringVar << endl;
}



/*
Input :Enter a string: My name is Md.Fazley Atif Maruf
       Enter another string: I am a male
Output:Entered char array is: My name is Md.Fazley Atif Maruf
       Entered string is: I am a male
*/
