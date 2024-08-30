#include <iostream>
using namespace std;

int main()
{
    int i,j,T,num,sum,sum_j,result;
    int array[num];

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num;

        for(j=0; j<num-1; j++)
        {
            cin>>array[j];
        }

        sum=0,sum_j=0;
        for(j=0; j<num-1; j++)
        {
            sum=sum+array[j];
            sum_j=sum_j+(j+1);
        }
        sum_j=sum_j+(j+1);

        result=sum_j-sum;
        cout<<result<<endl;
    }
    return 0;
}



/*
How many number you taking = 3
Input : Give a number = 7 2 1 4 6 5 3
Output: 7
Input : Give a number = 9 9 4 5 8 6 1 7 2
Output: 3
Input : Give a number = 5 1 2 4 3
Output: 5
*/
