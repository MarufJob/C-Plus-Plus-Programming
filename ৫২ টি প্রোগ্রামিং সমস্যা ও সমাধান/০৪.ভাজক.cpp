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

        cout<<"Case "<<i<<":";
       for(j=1 ; j<=num ; j++)
       {
            if(num%j==0)
            cout<<" "<<j;
       }
       cout<<endl;
    }

    return 0;
}

/*
How many number you taking = 3
Input :Give a number = 6
Output :Case 1: 1 2 3 6

Input :Give a number = 15
Output :Case 2: 1 3 5 15

Input :Give a number = 23
Output :Case 3: 1 23
/*
