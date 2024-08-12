#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,T,num;
    long long int fact;
    double sum;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num;

        sum=0,fact=1;

        for(j=1; j<=num; j++)
        {
            //sum = 0;
            for(k=1; k<=j; k++)
            {
                fact*=k;
            }
            //cout<< "K = "<<k-1<<" fact = " <<fact<<endl;
            sum+=1.0*(k-1)/fact;
            fact=1;
            //cout<<"Sum = "<<k-1<<" = "<< fixed <<setprecision(4)<<sum<<endl;
        }
        cout<<"Sum = "<< fixed <<setprecision(4)<<sum<<endl;
    }
    return 0;
}



/*
How many number you taking = 5
Input : Give a number = 5
Output: Sum = 2.7083
Input : Give a number = 8
Output: Sum = 2.7183
Input : Give a number = 10
Output: Sum = 2.7183
*/



/*
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fact(int i)
{
    long long int factNum=1;
    for(int j=1; j<=i; j++)
    {
        factNum*=j;
    }
    return factNum;
}

int main()
{
    int i,j,k,T,num;
    double sum;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num;

        sum=0;

        for(j=1; j<=num; j++)
        {
            sum+=(double)j/fact(j);
        }
        cout<<"Sum = "<< fixed <<setprecision(4)<<sum<<endl;
    }
    return 0;
}
*/



/*
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,T,num;
    long long int fact;
    double sum;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num;

        sum=0,fact=1;

        for(j=1; j<=num; j++)
        {
            fact*=j;
            sum+=1.0*j/fact;
            //sum+=(double)j/fact;
        }
        cout<<"Sum = "<< fixed <<setprecision(4)<<sum<<endl;
    }
    return 0;
}
*/
