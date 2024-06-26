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


/*
#include <iostream>
using namespace std;

int main()
{
    int T;
    cout << "How many numbers are you taking = ";
    cin >> T;
    cin.ignore(); // Consume the newline character

    for (int i = 1; i <= T; i++)
    {
        int num = 1;
        cout << "Give a string: ";

        // Dynamically allocate memory for the string
        char* str = new char[10000000];
        cin.get(str, 10000000);
        cin.ignore(); // Consume the newline character after inputting the string

        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == ' ')
            {
                num++;
            }
        }
        cout << "Number of words in the string: " << num << endl;

        // Free dynamically allocated memory
        delete[] str;
    }
    return 0;
}
*/




/*
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
        int num = 0;
        bool pass = 1;

        cout << "Give a string: ";
        cin.get(str, 100);
        cin.ignore(); // Consume the newline character after inputting the string

        for (int i = 0; str[i] != '\0'; i++)
        {

            if (str[i] != ' ' && pass)
            {
                num++;
                pass = 0;

                //cout<<"num"<<i<<endl;
            }

            else if (str[i] == ' ' && !pass)
            {
                pass = 1;
                
                //cout<<"num"<<i<<endl;
            }
        }
        cout <<num<< endl;
    }
    return 0;
}
*/




/*
#include <iostream>
using namespace std;

int main()
{
    int i, T;
    //char str[100];    ///cin.getline(str,100);
    string str;    ///getline(cin, str);

    cout << "How many numbers are you taking = ";
    cin >> T;
    cin.ignore(); // Consume the newline character

    for (i = 1; i <= T; i++)
    {
        int num = 0;
        bool pass = 0;

        cout << "Give a string: ";
        // cin.get(str, 100);
        // cin.ignore(); // Consume the newline character after inputting the string
        //cin.getline(str,100);
        
        getline(cin, str);    ///for -> string str;

        //int i=0;
        for (char c: str)    ///Range loop working for string variable
        {
            //i++;
            if (c == ' ')
            {
                pass = 0;

                //cout<<"num"<<i<<" = "<<c<<endl;
            }

            else if (!pass)
            {
                pass = 1;
                num++;
                
                //cout<<"num"<<i<<" = "<<c<<endl;
            }
        }
        cout <<num<< endl;
    }
    return 0;
}
*/




/*
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int i, T;
    char str[1000000];

    cout << "How many numbers are you taking = ";
    cin >> T;
    cin.ignore(); // Consume the newline character

    for (i = 1; i <= T; i++)
    {
        int num = 0;
        //char line[] = "";
        char *p, *e;
        long input;
        //int count = 0;
        p = str;
        cout << "Give a string: ";
        cin.get(str, 100);
        cin.ignore(); // Consume the newline character after inputting the string
        
        
        for (p = str; ;p = e)
        {
            input = strtol(p, &e, 10);
            if (p == e)
            {
                break;
            }
            num++;
        }
        cout <<num<< endl;
    }
    return 0;
}
*/
