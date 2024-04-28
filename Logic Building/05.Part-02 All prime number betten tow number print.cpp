#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}#include <iostream>
using namespace std;

int main() 
{
    int i,j,k,num;
    
    cout<<"Strat = ";
    cin>>i;
    cout<<"end = ";
    cin>>num;

    for(k=i ; i<=num ; i++)
    {
        for(j=2 ; j<i ; j++)
        {
            if(i%j==0)
            {
            break;
            }
        }
        if(i==j)
        cout<<i<<" ";
    }

    return 0;
}


---------------

#include <iostream>
using namespace std;

int main()
{
    int i,j,k,mid,num;

    cout<<"Strat = ";
    cin>>i;
    cout<<"end = ";
    cin>>num;


    for(k=i ; i<=num ; i++)
    {
        mid=i/2;
        //cout<<"I = "<<i<<endl;
        //cout<<mid<<endl;
        for(j=2 ; j<=i ; j++)
        {
            if(i%j==0)
            {
            //cout<<"j = "<<j<<' '<<"num = "<<num<<endl;
            // cout<<i<<"-";
            // cout<<"Not Prime";
            //return 0;
            break;
            }


        }
        //cout<<"mid = "<<mid<<endl;
        //cout<<"j = "<<j<<' '<<"i = "<<i<<endl;
        if(i==j)
        cout<<i<<" ";
    }

    return 0;
}


-------------


#include <iostream>
using namespace std;
int main() {
   
   int i,j,n,m,sum=0,sum1=0,sum2=0;
   
   cout<< "Give a number = " ;
   cin >>n;
   
    for( i=1 ;i<=n ;i++)
   {
         
        if(i>1)
        {
        m=i/2;
        
        for(j = 2; j <= m; j++)
            {
                
            //Nonprime
             if(i%j==0)
                {
                    sum2-=i;
                    break;
                }
            }
            //Prime sum
            sum2 +=i;
       }
   }
   
    cout << "Even Sum = "<<sum<<endl;
    cout << "Odd Sum = "<<sum1<<endl;
    cout << "Prime Sum = "<<sum2<<endl;
   
    return 0;
}

/*
Input:  Give a number = 100
Output: Even Sum = 2550
        Odd Sum = 2500
        Prime Sum = 1060

Input:  Give a number = 15
Output: Even Sum = 56
        Odd Sum = 64
        Prime Sum = 41

Input:  Give a number = 10
Output: Even Sum = 30
        Odd Sum = 25
        Prime Sum = 17
*/

----------

#include <iostream>
using namespace std;

int main()
{
    int i,j,k,mid,num;

    cout<<"Strat = ";
    cin>>i;
    cout<<"end = ";
    cin>>num;


    for(k=i ; k<=num ; k++)
    {
        mid=k/2;
        //cout<<"I = "<<i<<endl;
        //cout<<mid<<endl;
        for(j=2 ; j<=mid ; j++)
        {
            if(k%j==0)
            {
            //cout<<"j = "<<j<<' '<<"num = "<<num<<endl;
             //cout<<k<<"-";
            // cout<<"Not Prime";
            //return 0;
            break;
            }


        }
        //cout<<"mid = "<<mid<<"  "<<"j = "<<j<<"  "<<"k = "<<k<<endl;
        //cout<<"j = "<<j<<' '<<"i = "<<i<<endl;
        if(mid==j-1)
        cout<<k<<" ";
        //cout<<endl;


        //cout<<k<<endl;
    }

    return 0;
}


-----------



/*
#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n, sumEven = 0, sumOdd = 0, sumPrime = 0;

    cout << "Give a number = ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sumEven += i;
        } else {
            sumOdd += i;
        }

        if (isPrime(i)) {
            sumPrime += i;
        }
    }

    cout << "Even Sum = " << sumEven << endl;
    cout << "Odd Sum = " << sumOdd << endl;
    cout << "Prime Sum = " << sumPrime << endl;

    return 0;
}

Created a separate function isPrime to check whether a number is prime.

Used meaningful variable names for better readability.

Simplified the prime number check using the square root optimization.

Removed unnecessary code and improved indentation for clarity.
*/

