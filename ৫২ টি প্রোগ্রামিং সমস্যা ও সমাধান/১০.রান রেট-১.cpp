#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i,T,num1, num2, num3, Odone;
    float CurRunrate, NeedRunrate;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give three number = ";
        cin>>num1>>num2>>num3;
        
        Odone=300-num3;
        CurRunrate=(num2/Odone)*6;
        NeedRunrate=((num1-num2+1)/num3)*6;
        
        cout<<setprecision(3)<<CurRunrate<<" "<<NeedRunrate<<endl;
        
        

        
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
