#include <iostream>

using namespace std;

int main()
{
    int i,T,num;
    double sq_root;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num;

        sq_root = sqrt(num);


        if(sq_root * sq_root == num)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }

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