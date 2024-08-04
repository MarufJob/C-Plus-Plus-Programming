#include <iostream>
using namespace std;

int main()
{
    int i,j,T,A,B,C,num;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give two number = ";
        cin>>A>>B>>C;

        if(A<C)
        {
            A=C;
        }

        else if(A>C && A%C!=0)
        {
            num=C-(A%C);
            A+=num;
            //cout<<A<<endl;
        }

        for(j=A; j<=B; j+=C)
        {
            cout<<j<<endl;
        }
    }
    return 0;
}



/*
How many number you taking = 5
Input : Give two number = 2 20 3
Output: 3
        6
        9
        12
        15
        18
Input : Give two number = 50 60 5
Output: 50
        55
        60
Input : Give two number = 55 100 6
Output: 60
        66
        72
        78
        84
        90
        96
*/
