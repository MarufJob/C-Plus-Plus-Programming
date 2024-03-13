#include <iostream>
using namespace std;

int main()
{
    int i,j,T,num,mod,count;
    
    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        count=0;
        cout<<"Give a number = ";
        cin>>num;

        for(j=5; j<=num; j=j+5)
        {
            if(j%5==0)
            {
                count++;
                mod=j/5;
                if(mod%5==0)
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}


/*
How many number you taking = 3
Input :Give a number = 6
Output:1
Input :Give a number = 15
Output:3
Input :Give a number = 100
Output:24
*/
