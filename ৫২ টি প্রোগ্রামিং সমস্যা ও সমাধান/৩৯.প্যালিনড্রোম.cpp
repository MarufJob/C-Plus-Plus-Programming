#include <iostream>
using namespace std;

int main()
{
    int i,j,leanth,num,palindrome,T;
    string str;

    cout<<"How many number you taking = ";
    cin>>T;
    cin.ignore(); // Consume the newline character

    while(T--)
    {
        cout<<"Give a number = ";
        getline(cin,str);

        palindrome = 1;

        leanth=str.size();
        //cout<<leanth<<endl;

        for(i=0,j=leanth-1; i<j; i++,j--)
        {
            if(str[i]!=str[j])
            {
                palindrome = 0;
                break;
            }
        }
        if(palindrome == 1)
        cout<<"Yes! It is palindrome!"<<endl;
        else
        cout<<"Sorry! It is not palindrome!"<<endl;
    }
    return 0;
}



/*
How many number you taking = 3
Input : Give a number = wow
Output: Yes! It is palindrome!
Input : Give a number = string
Output: Sorry! It is not palindrome!
Input : Give a number = civic
Output: Yes! It is palindrome!
*/
