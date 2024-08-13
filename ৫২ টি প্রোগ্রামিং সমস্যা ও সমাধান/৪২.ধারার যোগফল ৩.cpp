#include <iostream>
using namespace std;

int main()
{
    int i,j,T,num;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num;

        for(j=num; j>=0; j--)
        {
            if(j>1)
            cout<<"2^"<<j<<" + ";
            else if(j==1)
            cout<<"2 + ";
            else
            cout<<"1"<<endl;

            //(j>1)?cout<<"2^"<<j<<" + ":(j==1)?cout<<"2 + ":cout<<"1"<<endl;
            //cout<<(j>1?"2^" + to_string(j) + " + " : j == 1 ? "2 + " : "1");
        }
        //cout<<endl;
    }
    return 0;
}



/*
How many number you taking = 3
Input : Give a number = 5
Output: 2^5 + 2^4 + 2^3 + 2^2 + 2 + 1
Input : Give a number = 8
Output: 2^8 + 2^7 + 2^6 + 2^5 + 2^4 + 2^3 + 2^2 + 2 + 1
Input : Give a number = 10
Output: 2^10 + 2^9 + 2^8 + 2^7 + 2^6 + 2^5 + 2^4 + 2^3 + 2^2 + 2 + 1
*/
