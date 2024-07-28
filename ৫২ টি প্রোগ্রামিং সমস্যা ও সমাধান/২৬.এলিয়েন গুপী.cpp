#include <iostream>
using namespace std;

int main()
{
    int i,T,day_food,num2;
    float num;
    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        day_food=0;

        cout<<"Give a number = ";
        cin>>num;

        while(num>=1)
        {
            num=num/2;
            //cout<<num<<endl;
            day_food++;
        }
        cout<<day_food<<" days"<<endl;
    }
    return 0;
}



/*
How many number you taking = 5
Input : Give a number = 40.0
Output: 6 days
Input : Give a number = 200.0
Output: 8 days
Input : Give a number = 300.0
Output: 9 days
Input : Give a number = 500.0
Output: 9 days
Input : Give a number = 600.0
Output: 10 days
*/
