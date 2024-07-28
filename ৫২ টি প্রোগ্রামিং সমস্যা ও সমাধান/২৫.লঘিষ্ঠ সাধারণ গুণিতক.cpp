#include <iostream>
using namespace std;

int gcd(int a,int b)
{
    int temp;

    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}


int main()
{
    int i,T,num1,num2,MUL,GCD,LCM;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give two number = ";
        cin>>num1>>num2;

        MUL=num1*num2;

        GCD=gcd(num1,num2);

        LCM=MUL/GCD;

        cout<<"LCM = "<<LCM<<endl;
    }
    return 0;
}



/*
How many number you taking = 5
Input : Give two number = 30 15
Output: LCM = 30
Input : Give two number = 12 16
Output: LCM = 48
Input : Give two number = 14 35
Output: LCM = 70
Input : Give two number = 4 6
Output: LCM = 12
Input : Give two number = 105 15
Output: LCM = 105
*/
