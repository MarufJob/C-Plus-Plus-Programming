#include <iostream>

using namespace std;

int main()
{
    int i,j,T,num,x;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give two number = ";
        cin>>x>>num;

        if(x>num)
        {
            cout<<"Invalid!"<<endl;
        }

        else
        {
            for(j=x; j<=num; j+=x)
            {
            cout<<j<<endl;
            }
        }

    }
    return 0;
}



/*
How many number you taking = 5
Input : Give two number = 2 10
Output: 2
        4
        6
        8
        10
Input : Give two number = 99 1000
Output: 99
        198
        297
        396
        495
        594
        693
        792
        891
        990
Input : Give two number = 10 5
Output: Invalid!
Input : Give two number = 33 333
Output: 33
        66
        99
        132
        165
        198
        231
        264
        297
        330
Input : Give two number = 55 550
Output: 55
        110
        165
        220
        275
        330
        385
        440
        495
        550
*/
