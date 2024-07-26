#include <iostream>
using namespace std;

int main()
{
    int i,j,T,num;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num;

        int array[num];

        for(j=0 ; j<num ; j++)
        {
            cin>>array[j];
        }
        for(j=0 ; j<num ; j++)
        {
            if(j%2==0)
            cout<<array[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}



/*
How many number you taking = 5
Input : Give a number = 5
        1 2 3 4 5
Output :1 3 5
Input : Give a number = 10
        1 4 55 66 22 0 76 11 23 78
Output :1 55 22 76 23
Input : Give a number = 10
        11 22 33 44 55 66 77 88 99 100
Output :11 33 55 77 99
Input : Give a number = 5
        20722 501 27356 21714 91241
Output :20722 27356 91241
Input : Give a number = 3
        51010 23119 73950
Output :51010 73950
*/