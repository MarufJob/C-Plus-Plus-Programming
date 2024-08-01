#include <iostream>
using namespace std;

int main()
{
    int i,T;
    char ch;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>ch;


        if('A'<=ch && ch<='Z')
        {
            cout<<"Uppercase Character"<<endl;
        }

        else if('a'<=ch && ch<='z')
        {
            cout<<"Lowercase Character"<<endl;
        }

        else if('0'<=ch && ch<='9')
        {
            cout<<"Numerical Digit"<<endl;
        }

        else
        {
            cout<<"Special Character"<<endl;
        }



        //('A'<=ch && ch<='Z')?cout<<"Uppercase Character"<<endl:('a'<=ch && ch<='z')?cout<<"Lowercase Character"<<endl:('0'<=ch && ch<='9')?cout<<"Numerical Digit"<<endl:cout<<"Special Character"<<endl;
    }

    return 0;
}



/*
How many number you taking = 7
Input : Give a number = A
Output: Uppercase Character
Input : Give a number = M
Output: Uppercase Character

Input : Give a number = a
Output: Lowercase Character
Input : Give a number = m
Output: Lowercase Character

Input : Give a number = 5
Output: Numerical Digit
Input : Give a number = 9
Output: Numerical Digit

Input : Give a number = ;
Output: Special Character
*/
