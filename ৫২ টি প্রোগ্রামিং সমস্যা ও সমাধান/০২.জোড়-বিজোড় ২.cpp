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

/*
How many number you taking = 3
Input : Give a number = 100
Output: even
Input : Give a number = 0
Output: even
Input : Give a number = 1111
Output: odd
*/
