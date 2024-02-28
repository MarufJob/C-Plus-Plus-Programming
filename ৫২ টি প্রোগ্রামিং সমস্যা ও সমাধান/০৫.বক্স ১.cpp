#include <iostream>

using namespace std;

int main()
{
    int i,j,k,T,num;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num;

       for(j=1 ; j<=num ; j++)
       {
            for(k=1 ; k<=num ; k++)
            {
              cout<<"*";
            }
            cout<<endl;
       }
       cout<<endl;
    }
    return 0;
}


/*
How many number you taking = 3
Input :Give a number = 1
Output :*

Input :Give a number = 3
Output :***
        ***
        ***

Input :Give a number = 5
Output :*****
        *****
        *****
        *****
        *****
*/