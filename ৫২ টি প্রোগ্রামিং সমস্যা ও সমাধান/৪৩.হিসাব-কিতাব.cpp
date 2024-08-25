#include <iostream>
using namespace std;

int main()
{
    int i,j,k,T,num1,num2,num3,sum,power;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give three number = ";
        cin>>num1>>num2>>num3;

        sum=0,power=1;

        for(j=1; j<=num2; j++)
        {
            power*=num1;
        }
        sum+=power;
        cout<<"Result = "<<sum%num3<<endl;
    }
    return 0;
}



/*
How many number you taking = 5
Input : Give three number = 2 3 3
Output: Result = 2
Input : Give three number = 2 10 5
Output: Result = 4
Input : Give three number = 50 2 3
Output: Result = 1
*/




/*
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int i,j,k,T,num1,num2,num3,sum,power;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give three number = ";
        cin>>num1>>num2>>num3;

        sum=0;
        power=pow(num1,num2);
        sum+=power;
        cout<<"Result = "<<sum%num3<<endl;
    }
    return 0;
}
*/



/*
#include <iostream>
using namespace std;

int main()
{
    int i,j,k,T,num1,num2,num3,power;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give three number = ";
        cin>>num1>>num2>>num3;

        power=1;

        for(j=1; j<=num2; j++)
        {
            power=(num1*power)%num3;
        }
        cout<<"Result = "<<power%num3<<endl;
    }
    return 0;
}
*/



/*
#include <iostream>
using namespace std;

int main()
{
    int i,j,k,T,mid,num1,num2,num3,power,result;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give three number = ";
        cin>>num1>>num2>>num3;

        mid=num2/2,power=1;

        for(j=1; j<=num2/2; j++)
        {
            power=(num1*power)%num3;
        }

        if(num2%2==0)
        cout<<"Result = "<<((power*power)%num3)<<endl;
        else
        cout<<"Result = "<<((power*power*num1)%num3)<<endl;
    }
    return 0;
}
*/



/*
How many number you taking = 5
Give three number = 5 10 7
Result = 2
Give three number = 3 9 4
Result = 3
Give three number = 5 9 7
Result = 6
Give three number = 100 100 3
Result = 1
Give three number = 50 49 3
Result = 2
*/
