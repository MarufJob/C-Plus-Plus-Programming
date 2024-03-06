#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i,T,num;
    int sq_root;
    //double sq_root;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num;

        sq_root = sqrt(num);
        //cout<<sq_root<<endl;

        if(sq_root * sq_root == num)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }

    return 0;
}


/*
How many number you taking = 3
Input : Give a number = 16
Output :Yes

Input : Give a number = 18
Output :No

Input : Give a number = 196
Output :Yes
*/
