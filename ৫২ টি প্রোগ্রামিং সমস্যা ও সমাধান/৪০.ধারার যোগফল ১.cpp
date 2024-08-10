#include <iostream>
using namespace std;

int main()
{
    int i,j,k,T,num1,num2,sum,temp;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num1>>num2;

        sum=1,temp=1;

        for(j=1; j<=num2; j++)
        {
            for(k=1; k<=j; k++)
            {
                temp*=num1;
            }
            sum+=temp;
            temp=1;
        }
        cout<<sum<<endl;
    }
    
    return 0;
}



/*
How many number you taking = 5
Input : Give a number = 5 2
Output: 31
Input : Give a number = 2 5
Output: 63
Input : Give a number = 2 10
Output: 2047
Input : Give a number = 5 10
Output: 12207031
Input : Give a number = 10 5
Output: 111111
*/



/*
How many number you taking = 5
Input : Give a number = 5 2
Output: 31
Input : Give a number = 2 5
Output: 63
Input : Give a number = 2 10
Output: 2047
Input : Give a number = 5 10
Output: 12207031
Input : Give a number = 10 5
Output: 111111
*/



/*
#include <iostream>
using namespace std;

int main()
{
    int i,j,T,num1,num2,sum,power;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num1>>num2;

        sum=1,power=1;
        for(j=1; j<=num2; j++)
        {
            power*=num1;
            sum+=power;
        }
        cout<<sum<<endl;
    }
    return 0;
}
*/
