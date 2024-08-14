#include <iostream>
using namespace std;

int main()
{
    int i,j,k,T,num1,num2,num3,sum,power;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give three number = ";
        cin>>num1>>num2>>num3;

        sum=0,power=1;

        for(j=1; j<=num2; j++)
        {
            power*=num1;
        }
        sum+=power;
        cout<<sum%num3<<endl;
    }
    return 0;
}



/*
How many number you taking = 5
Input : Give three number = 2 3 3
Output: 2
Input : Give three number = 2 10 5
Output: 4
Input : Give three number = 50 2 3
Output: 1
*/
