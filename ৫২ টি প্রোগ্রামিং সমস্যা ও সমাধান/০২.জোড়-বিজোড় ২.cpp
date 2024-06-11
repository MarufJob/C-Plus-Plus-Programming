#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i,T;
    char num[100];
    //char num1;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num;

        //num1 = num.at(num.length() - 1);
        int length = strlen(num);
        //int last_digit = num[length-1];
        
        // if(last_digit=='0'||last_digit=='2'||last_digit=='4'||last_digit=='6'||last_digit=='8')
        // {
        //     cout<<"even"<<endl;
        // }
        
        //string convert a number
        int last_digit = num[length-1]-48;

        if(last_digit%2==0)
        {
            cout<<"even"<<endl;
        }
        else
        {
            cout<<"odd"<<endl;
        }
        //(last_digit%2==0)?cout<<"even"<<endl:cout<<"odd"<<endl;
        //cout<<(last_digit%2==0?"even":"odd")<<endl;
    }
    
    return 0;
}


/*
How many number you taking = 3
Input : Give a number = 100
Output: even
Input : Give a number = 0
Output: even
Input : Give a number = 1111
Output: odd
*/


/*

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    string num;

    cout << "How many numbers are you taking = ";
    cin >> T;

    for (int i = 0; i < T; ++i)
    {
        cout << "Give a number = ";
        cin >> num;

        char last_digit = num.back(); // Get the last character of the string

        // Convert char to int and check if even
        cout << ((last_digit - '0') % 2 == 0 ? "even" : "odd") << endl;
    }
    
    return 0;
}

*/


/*
#include <iostream>
using namespace std;

int main()
{
    int i,T;
    string num;
    char num1;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num;

        num1 = num.at(num.length() - 1);

        if(num1=='0'||num1=='2'||num1=='4'||num1=='6'||num1=='8')
        {
            cout<<"even"<<endl;
        }
        else
        {
            cout<<"odd"<<endl;
        }
    }
    
    return 0;
}
*/
