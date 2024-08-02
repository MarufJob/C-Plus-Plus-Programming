#include <iostream>

using namespace std;

int main()
{
    int i,j,T;//,num,sum;
    unsigned long int num,sum;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num;

        sum=0;

        for(j=1; j<=num/2; j++)
        {
            if(num%j==0)
            {
                sum+=j;
                //cout<<j<<" Sum = "<<sum<<endl;
            }
            //cout<<j<<" Sum = "<<sum<<endl;
        }

        if(num==sum)
        {
            cout<<"Yes, "<<num<<" is a perfect number!"<<endl;
        }
        else
        {
            cout<<"No, "<<num<<" is not a perfect number!"<<endl;
        }
        //cout<<i<<" = i"<<endl;
    }
    return 0;
}



/*
How many number you taking = 5
Input : Give a number = 6
Output: Yes, 6 is a perfect number!
Input : Give a number = 28
Output: Yes, 28 is a perfect number!
Input : Give a number = 30
Output: No, 30 is not a perfect number!
Input : Give a number = 250
Output: No, 250 is not a perfect number!
Input : Give a number = 496
Output: Yes, 496 is a perfect number!
Input : Give a number = 8128
Output: Yes, 8128 is a perfect number!
Input : Give a number = 33550336
Output: Yes, 33550336 is a perfect number!
*/
