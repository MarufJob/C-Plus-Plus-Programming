#include <iostream>

using namespace std;

int main()
{
    int T,num1,num2,temp,kase;

    cout<<"How many number you taking = ";
    cin>>T;

    for(kase=1 ; kase<=T ; kase++)
    {
        //sum=0;
        cout<<"Give a number = ";
        cin>>num1>>num1;
        
        if(num1>num1)
        {
            temp = num1;
            num1 = num2;
            num2 = temp;
        }

       cout<<"Case "<<kase<<" "<<num1<<" "<<num2;
       cout<<endl;
      
    return 0;
}


/*
        How many number you taking = 3
Input : Give a number = 100
Output :even

Input : Give a number = 0
Output :even

Input : Give a number = 1111
Output :odd
*/

/*How many number you taking = 5
Give a number = 12345
Sum = 6
Give a number = 56789
Sum = 14
Give a number = 14310
Sum = 1
Give a number = 10062
Sum = 3
Give a number = 96587
Sum = 16
*/
