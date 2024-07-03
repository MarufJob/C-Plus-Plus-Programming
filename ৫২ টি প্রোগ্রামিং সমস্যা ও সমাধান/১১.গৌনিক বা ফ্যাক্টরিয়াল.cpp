#include <iostream>
using namespace std;

int main()
{
    int i,j,nth,T;
    long long int factotial;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        factotial = 1;
        cout<<"Give a number = ";
        cin>>nth;

        for(j=1 ; j<=nth ; j++)    //or j=2
        {
            factotial  = j*factotial;
        }
       cout<<factotial<<endl;
    }
    return 0;
}



/*
How many number you taking = 3
Give a number = 6
720
Give a number = 10
3628800
Give a number = 15
1307674368000
*/



/*
#include <iostream>
using namespace std;

long long int factorial(int n);

int main()
{
    int i,j,nth,T;
    long long int result;
    
    cout<<"How many number you taking = ";
    cin>>T;
    
    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>nth;
        
        result = factorial(nth);
        cout << "Factorial of " << nth << " = " << result << endl;
    }
    return 0;
}

long long int factorial(int n)
{
    if(n > 1)
    {
        return n * factorial(n-1);
    }
    else
    {
        return 1;
    }
}
*/
