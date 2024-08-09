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



/*
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i,j,leanth,T;

    cout<<"How many number you taking = ";
    cin>>T;
    cin.ignore(); // Consume the newline character

    while(T--)
    {
        cout<<"Give a number = ";
        char str1[1000],str2[1000];
        cin.get(str1, 1000);
        cin.ignore(); // Consume the newline character after inputting the string

        leanth=strlen(str1);
        //cout<<leanth<<endl;

        for(i=0,j=leanth-1; j>=0; i++,j--)
        {
            str2[i]=str1[j];
            //cout<<str1[i]<<" = "<<str2[j]<<endl;
        }
        str2[i]='\0';
        //cout<<str1<<" = "<<str2<<endl;

        //bool num = strcmp(str1, str2);

        //if(num == 0)
        if(strcmp(str1, str2) == 0)
        cout<<"Yes! It is palindrome!"<<endl;

        else
        cout<<"Sorry! It is not palindrome!"<<endl;
    }
    return 0;
}
*/
