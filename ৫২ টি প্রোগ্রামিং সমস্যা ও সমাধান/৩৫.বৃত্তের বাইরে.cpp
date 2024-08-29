#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,r,T,Xc,Yc,X1,Y1,XX,YY;
    float mid_space;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give five number = ";
        cin>>Xc>>Yc>>r>>X1>>Y1;

        XX=pow((X1-Xc),2);
        YY=pow((Y1-Yc),2);
        mid_space=sqrt(XX+YY);
        //cout<<"result = "<< fixed <<setprecision(4)<<mid_space<<endl;

        if(mid_space>r)
        {
            cout<<"The point is not inside the circle"<<endl;
        }

        else
        {
            cout<<"The point is inside the circle"<<endl;
        }
    }
    return 0;
}



/*
How many number you taking = 2
Input : Give five number = 1 1
                           4
                           10 -14
Output: The point is not inside the circle
Input : Give five number = 1 1
                           8
                           5 6
Output: The point is inside the circle
*/
