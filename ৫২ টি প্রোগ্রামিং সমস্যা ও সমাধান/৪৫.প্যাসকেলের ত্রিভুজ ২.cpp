#include <iostream>
using namespace std;

int main()
{
    int i,j,k,T,num;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give three number = ";
        cin>>num;

        long long int pascal[51][51];

        pascal[1][0]=1;
        pascal[2][0]=1;
        pascal[2][1]=1;

        for(j=3; j<=50; j++)
        {

            pascal[j][0]=1;

            for(k=1 ; k<j-1 ; k++)
            {
                pascal[j][k]=pascal[j-1][k-1]+pascal[j-1][k];
            }

            pascal[j][k]=1;
        }

        for(j=1; j<=num+1; j++)
        {
            for(k=0 ; k<=j-1 ; k++)
            {
                cout<<pascal[j][k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



/*
How many number you taking = 3
Input : Give three number = 3
Output: 1
        1 1
        1 2 1
        1 3 3 1
Input : Give three number = 4
Output: 1
        1 1
        1 2 1
        1 3 3 1
        1 4 6 4 1
Input : Give three number = 5
Output: 1
        1 1
        1 2 1
        1 3 3 1
        1 4 6 4 1
        1 5 10 10 5 1
*/



/*
#include <iostream>
using namespace std;

int main()
{
    int i,j,k,T,num;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give three number = ";
        cin>>num;

        long long int pascal[51][51];

        //pascal[1][0]=1;
        //pascal[2][0]=1;
        //pascal[2][1]=1;

        for(j=0; j<=50; j++)
        {

            pascal[j][0]=1;

            for(k=1 ; k<j-1 ; k++)
            {
                pascal[j][k]=pascal[j-1][k-1]+pascal[j-1][k];
            }

            pascal[j][k]=1;
        }

        for(j=1; j<=num+1; j++)
        {
            for(k=0 ; k<=j-1 ; k++)
            {
                cout<<pascal[j][k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
*/
