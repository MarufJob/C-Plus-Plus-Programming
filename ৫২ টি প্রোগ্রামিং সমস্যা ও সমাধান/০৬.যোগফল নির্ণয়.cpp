#include <iostream>

using namespace std;

int main()
{
    int i,j,k,T,num,m,n,sum;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        sum=0;
        cout<<"Give a number = ";
        cin>>num;

       for(j=1 ; j<=5 ; j++)
       {
           m=num%10;
           num=num/10;
           if(j==1 || j==5)
           {
               sum=sum+m;
           }
       }
       cout<<"Sum = "<<sum;
       cout<<endl;
    }

    return 0;
}


/*
How many number you taking = 5
Input :Give a number = 12345
Output :Sum = 6
Input :Give a number = 56789
Output :Sum = 14
Input :Give a number = 14310
Output :Sum = 1
Input :Give a number = 10062
Output :Sum = 3
Input :Give a number = 96587
Output :Sum = 16
*/


while(j<=5)
        {
            
        }
