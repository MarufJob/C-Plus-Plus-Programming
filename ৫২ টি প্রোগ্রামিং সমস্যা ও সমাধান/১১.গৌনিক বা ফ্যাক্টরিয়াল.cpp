#include <iostream>

using namespace std;

int main()
{
    int T,num1,num2=1,temp,i,j,nth;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        temp=1;
        cout<<"Give a number = ";
        cin>>nth;

        for(j=1 ; j<=nth ; j++)
        {

            temp = j*temp;
        }

       cout<<temp<<endl;
    }

    return 0;
}


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
