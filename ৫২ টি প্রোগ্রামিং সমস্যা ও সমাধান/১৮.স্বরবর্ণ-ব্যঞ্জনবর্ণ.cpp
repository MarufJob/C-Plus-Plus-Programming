#include <iostream>
using namespace std;

int main()
{
    int i, T;
    char str[1001];

    cout << "How many input are you taking = ";
    cin >> T;
    cin.ignore(); // Consume the newline character

    for (i = 1; i <= T; i++)
    {
        cout << "Give a string: ";
        cin.get(str, 1001);
        cin.ignore(); // Consume the newline character after inputting the string
        char count[900] = {};

        
            for (int j = 0,k = 0; str[j] != '\0'; j++)
            {
                if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u')
                {
                     cout<<str[j];
                }
                else
                {
                    if(str[j]!=' ')
                    {
                        count[k]=str[j];
                        k++;
                    }
                }
            }
            cout<<endl;
            
            cout<<count<<endl;
    }
    return 0;
}



/*
How many input are you taking = 5
Input: Give a string: this is very easy
Output: iieea
        thssvrysy
Input: Give a string: it is a rainy sunday
Output: iiaaiua
        tsrnysndy
Input: Give a string: no way no good
Output: oaooo
        nwyngd
Input: Give a string: his mind was blown
Output: iiao
        hsmndwsblwn
*/



/*

#include <iostream>
using namespace std;

int main()
{
    int i, T;
    char str[1001];

    cout << "How many input are you taking = ";
    cin >> T;
    cin.ignore(); // Consume the newline character

    for (i = 1; i <= T; i++)
    {
        cout << "Give a string: ";
        cin.get(str, 10001);
        cin.ignore(); // Consume the newline character after inputting the string
        char consonant[9000] = {};

        
            for (int j = 0,k = 0; str[j] != '\0'; j++)
            {
                if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u')
                    {
                         cout<<str[j];
                    }
                else if(str[j]!=' ')
                
                    {
                        consonant[k]=str[j];
                        k++;
                    }
                
            }
            cout<<endl;
            cout<<consonant<<endl;
    }
    return 0;
}

*/
