#include <iostream>

using namespace std;

int main()
{
    int i,T,num;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num;

        if(num%2==0)
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
Output :even

Input : Give a number = 0
Output :even

Input : Give a number = 1111
Output :odd
*/
