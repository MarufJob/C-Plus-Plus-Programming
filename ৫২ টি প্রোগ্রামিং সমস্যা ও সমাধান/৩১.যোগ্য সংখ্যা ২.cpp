#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int i,j,T,D_num,num,N,sum,squt_num;
    //unsigned long int num,sum;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>N;
        
        for(num=2; num<=N; num++)
        {
            sum=1;
            squt_num=sqrt(num);
    
            for(j=2; j<=squt_num; j++)
            {
                if(num%j==0)
                {
    
                    D_num=num/j;
                    sum=sum+j+D_num;
                    //cout<<j<<" Sum = "<<sum<<endl;
                }
                //cout<<j<<" Sum = "<<sum<<endl;
            }
            
            if(num==sum)
            {
                cout<<num<<endl;
            }
    
            // if(num==sum)
            // {
            //     cout<<"Yes, "<<num<<" is a perfect number!"<<endl;
            // }
            // else
            // {
            //     cout<<"No, "<<num<<" is not a perfect number!"<<endl;
            // }
            //cout<<i<<" = i"<<endl;
        }
    }
    return 0;
}



/*
How many number you taking = 3
Input : Give a number = 100
Output: 6
        28
Input : Give a number = 500
Output: 6
        28
        496
Input : Give a number = 40000000
Output: 6
        28
        496
        8128
        33550336
*/
