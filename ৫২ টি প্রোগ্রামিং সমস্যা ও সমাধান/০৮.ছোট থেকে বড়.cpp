#include <iostream>

using namespace std;

int main()
{
    int T,num1,num2,num3,temp,kase;

    cout<<"How many number you taking = ";
    cin>>T;

    for(kase=1 ; kase<=T ; kase++)
    {
        cout<<"Give three number = ";
        cin>>num1>>num2>>num3;
        
        if(num1>num2 )
        {
            temp = num1;
            num1 = num2;
            num2 = temp;
            //cout<<"kase "<<kase<<": "<<num1<<" "<<num2<<" "<<num3<<endl;
        }
        
        if(num2>num3 )
        {
            temp = num2;
            num2 = num3;
            num3 = temp;
            //cout<<"kase "<<kase<<": "<<num1<<" "<<num2<<" "<<num3<<endl;
        }
        
        if(num1>num2 )
        {
            temp = num1;
            num1 = num2;
            num2 = temp;
            //cout<<"kase "<<kase<<": "<<num1<<" "<<num2<<" "<<num3<<endl<<endl<<endl;
        }
       
       cout<<"Case "<<kase<<": "<<num1<<" "<<num2<<" "<<num3<<endl;
    }
      
    return 0;
}

/*
How many number you taking = 3
Input : Give three number = 3 2 1
Output :Case 1: 1 2 3

Input : Give three number = 1 2 3
Output :Case 2: 1 2 3

Input : Give three number = 10 5 6
Output :Case 3: 5 6 10
*/
