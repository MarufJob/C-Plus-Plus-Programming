#include <iostream>
using namespace std;

int main()
{
    int i,j,m,num,T,sum;

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



/*
#include <iostream>
using namespace std;

int main()
{
    int i,j,m,n,T,sum;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        sum=0;
        char num[5];
        cout<<"Give a number = ";
        
        for(j=0 ; j<=4 ; j++)
        {
            cin>>num[j];
        }
        // m = num[0]- 48;
        // n = num[4]- '0';
        // sum= m+n;
        // cout<<"Sum = "<<sum;

        // sum = (num[0]- 48) + (num[4]- '0');
        // cout<<"Sum = "<<sum;
        
        cout<<"Sum = "<<(num[0]- 48) + (num[4]- '0');
        cout<<endl;
    }
    return 0;
}
*/



/*
#include <iostream>
using namespace std;

int main()
{
    int i,m,n,T,sum;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        sum=0;
        string num;
        cout<<"Give a number = ";
        cin>>num;
        
        m = num[0]- 48;
        n = num[4]- '0';
        sum= m+n;
        cout<<"Sum = "<<sum;

        // sum = (num[0]- 48) + (num[4]- '0');
        // cout<<"Sum = "<<sum;
        
        //cout<<"Sum = "<<(num[0]- 48) + (num[4]- '0');
        cout<<endl;
    }
    return 0;
}
*/
