#include <iostream>
using namespace std;

int main()
{
    int i, T;
    char str[1000];

    cout << "How many input are you taking = ";
    cin >> T;
    cin.ignore(); // Consume the newline character

    for (i = 1; i <= T; i++)
    {
        cout << "Give a string: ";
        cin.get(str, 1000);
        cin.ignore(); // Consume the newline character after inputting the string
        int count = 0;

        
            for (int j = 0; str[j] != '\0'; j++)
            {
                if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u')
                {
                     count++;
                }
            }
            
           cout <<"Number of vowels = "<<count<< endl;
    }
    return 0;
}


/*
How many input are you taking = 5
Input: Give a string: i am a programmer
Output:Number of vowels = 6
Input: Give a string: happy coding
Output:Number of vowels = 3
Input: Give a string: hello world
Output:Number of vowels = 3
Input: Give a string: i broke my computer.
Output:Number of vowels = 6
Input: Give a string: his last play was a big hit.
Output:Number of vowels = 7
*/



/*

#include <iostream>
//#include <cctype> //For tolower function
using namespace std;

int main()
{
    int i, T;
    string str;

    cout << "How many input are you taking = ";
    cin >> T;
    cin.ignore(); // Consume the newline character

    for (i = 1; i <= T; i++)
    {
        cout << "Give a string: ";
        getline(cin,str);
        //cin.ignore(); // Consume the newline character after inputting the string

        int count = 0;
        for (char ch: str)
        {
            char lowerCh = tolower(ch);
            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u')
            {
                 count++;
            }
        }
       cout <<"Number of vowels = "<<count<< endl;
    }
    return 0;
}

*/


/*
How many input are you taking = 3
Give a string: FAZLEY ATIF MARUF
Number of vowels = 6
Give a string: fazley atif maruf
Number of vowels = 6
Give a string: happy coding
Number of vowels = 3
Give a string: HAPPY CODING
Number of vowels = 3
Give a string: I am a programmer
Number of vowels = 6
*/
