#include <iostream>

using namespace std;

int main()
{
    int T,i,j,nth;
    long long int temp;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        temp=1;
        cout<<"Give a number = ";
        cin>>nth;

        for(j=1 ; j<=nth ; j++)
        {

            temp = j*temp;
        }

       cout<<temp<<endl;
    }

    return 0;
}

/*
How many number you taking = 3
Give a number = 6
720
Give a number = 10
3628800
Give a number = 15
1307674368000
*/
