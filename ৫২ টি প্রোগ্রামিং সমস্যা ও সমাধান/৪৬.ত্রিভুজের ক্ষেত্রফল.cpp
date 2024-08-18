#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,T,num1,num2,num3;
    double s,area;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num1>>num2>>num3;

        //s = 1.0*(num1+num2+num3)/2;
        s = double(num1+num2+num3)/2;
        area = sqrt(s*(s-num1)*(s-num2)*(s-num3));

        cout<<"Area = "<< fixed <<setprecision(3)<<area<<endl;
    }
    
    return 0;
}



/*
How many number you taking = 5
Input : Give a number = 24 30 18
Output: Area = 216.000
Input : Give a number = 13 18 15
Output: Area = 95.917
Input : Give a number = 20 20 20
Output: Area = 173.205
*/
