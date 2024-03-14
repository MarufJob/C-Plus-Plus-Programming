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
        CurRunrate=0;
        NeedRunrate=0;
        
        cout<<"Give three number = ";
        cin>>num1>>num2>>num3;
        
        Odone=300-num3;
        CurRunrate=(num2*1.0/Odone)*6;
        NeedRunrate=((num1*1.0-num2+1)/num3)*6;
        
        cout<<setprecision(3)<<CurRunrate<<" "<<setprecision(3)<<NeedRunrate<<endl;
    }

    return 0;
}

/*
How many number you taking = 4
Input :Give three number = 300 294 6
Output:6 7
Input :Give three number = 200 100 100
Output:3 6.06
Input :Give three number = 333 250 40
Output:5.77 12.6
Input :Give three number = 118 100 180
Output:5 0.633
*/
