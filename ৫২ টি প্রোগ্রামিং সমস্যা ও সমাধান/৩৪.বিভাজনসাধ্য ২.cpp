#include <iostream>
using namespace std;

int main()
{
    int i,j,T;
    long int A,B,C,num;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give three number = ";
        cin>>A>>B>>C;


        for(j=A*B; j<=C; j+=A*B)
        {
            cout<<j<<endl;
        }
    }
    return 0;
}



/*
How many number you taking = 5
Input : Give three number = 2 3 50
Output: 6
        12
        18
        24
        30
        36
        42
        48
Input : Give three number = 3 5 50
Output: 15
        30
        45
Input : Give three number = 5 6 100
Output: 30
        60
        90
*/
