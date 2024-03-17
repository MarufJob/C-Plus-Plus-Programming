#include <iostream>
using namespace std;

int main()
{
    int i, T;
    char str[100];

    cout << "How many numbers are you taking = ";
    cin >> T;
    cin.ignore(); // Consume the newline character

    for (i = 1; i <= T; i++)
    {
        int num = 1;
        cout << "Give a string: ";
        cin.get(str, 100);
        cin.ignore(); // Consume the newline character after inputting the string

        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == ' ')
            {
                num++;
            }
        }
        cout <<num<< endl;
    }
    return 0;
}


/*
How many numbers are you taking = 4
Input: Give a string: 1 -2 10000 -50 20 7 445
Output:7
Input: Give a string: 9
Output:1
Input: Give a string: -98 876 65
Output:3
Input: Give a string: 223 9876452 212
Output:3
*/
