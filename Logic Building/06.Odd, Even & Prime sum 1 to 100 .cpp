#include <iostream>
using namespace std;
int main() {
   
   int i,j,n,m,sum=0,sum1=0,sum2=0;
   
   cout<< "Give a number = " ;
   cin >>n;
   
    for( i=1 ;i<=n ;i++)
   {
          //Even number
          if(i%2==0){
             sum += i;
          }
       
          //Odd number
          else{
             sum1 +=i;
          }
    
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