#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i,T,run1, run2, numBall, OvDone;
    float CurRunrate, NeedRunrate;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        CurRunrate=0;
        NeedRunrate=0;
        
        cout<<"Give three number = ";
        cin>>run1>>run2>>numBall;
        
        OvDone=300-numBall;
        CurRunrate=(run2*1.0/OvDone)*6;
        NeedRunrate=((run1*1.0-run2+1)/numBall)*6;
        
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



/*
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i,T,run1, run2, numBall, OvDone;
    float CurRunrate, NeedRunrate;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give three number = ";
        cin>>run1>>run2>>numBall;
        
        OvDone=300-numBall;
        CurRunrate=(run2*6.0)/OvDone;
        NeedRunrate=((run1-run2+1)*6.0)/numBall;
        
        cout<<setprecision(3)<<CurRunrate<<" "<<setprecision(3)<<NeedRunrate<<endl;
    }
    return 0;
}
*/
