
#include <iostream>
using namespace std;

int main() 
{
    int i,j,k,num;
    
    cout<<"Start = ";
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


/*
Input:  Start = 1
        end = 100
Output: 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
        
Input:  Start = 100
        end = 250
Output: 101 103 107 109 113 127 131 137 139 149 151 157 163 167 173 179 181 191 193 197 199 211 223 227 229 233 239 241

Input:  Start = 250
        end = 400
Output: 251 257 263 269 271 277 281 283 293 307 311 313 317 331 337 347 349 353 359 367 373 379 383 389 397 
*/

/*-----------------------*/


/*

#include <iostream>
using namespace std;

int main()
{
    int i,j,k,mid,num;

    cout<<"Start = ";
    cin>>i;
    cout<<"end = ";
    cin>>num;


    for(k=i ; i<=num ; i++)
    {
        //mid=i/2;
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

*/


/*-----------------------*/


/*

#include <iostream>
using namespace std;
int main() {
   
   int i,j,mid,num,sum1=0,sum2=0;

    cout<<"Start = ";
    cin>>i;
    cout<<"end = ";
    cin>>num;
   
    for( i=i ;i<=num ;i++)
   {
         
        if(i>1)
        {
        mid=i/2;
        
        for(j = 2; j <= mid; j++)
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
            
            if(sum1!=sum2)
            cout<<i<<" ";
            
            sum1=sum2;
            
       }
   }
   
    return 0;
}

*/


/*---------------------*/


/*

#include <iostream>
using namespace std;

int main()
{
    int i,j,k,mid,num;

    cout<<"Start = ";
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


*/


/*--------------------------*/

/*
#include <iostream>
using namespace std;


int main()
{
    
    int num, i,j, flag;

    cout << "Enter a positive number: ";
    cin >> i;
    cout << "Enter an another positive number: ";
    cin >> num;
    
    if(num <= 0){
        cout << "This is an invalid number.";
        return 0;
    }


    for(i = i; i <= num; ++i)
    {
        flag = 0;

        for(j = 2; j <= i/2; ++j)
        {
            if(i % j == 0)
            {
                flag = 1; 
                break;
            }
        }
    
        if (flag == 0 && i>1)
        {
            //cout << num << " is not a prime number.";
            cout << i << " ";
        }
        // else
        // {
        //     cout << num << " is a prime number.";
        // }
    }
    
    return 0;
}



/*
Input:Enter a positive number: 150
      Enter an another positive number: 350
Output:151 157 163 167 173 179 181 191 193 197 199 211 223 227 229 233 239 241 251 257 263 269 271 277 281 283 293 307 311 313 317 331 337 347 349 

*/


*/


/*--------------------------*/




/*

#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return num;
}

int main() {
    int i,num;

    cout << "Give a number = ";
    cin >> i;
    
    cout << "Give an another number = ";
    cin >> num;

    for ( i = i; i <= num; i++) {

        if (isPrime(i)) {
            //sumPrime += i;
            cout<<i<<" ";
        }
    }

    return 0;
}

*/


/*
Created a separate function isPrime to check whether a number is prime.

Used meaningful variable names for better readability.

Simplified the prime number check using the square root optimization.

Removed unnecessary code and improved indentation for clarity.
*/




/*--------------------------*/



/*

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
        int countNum = 0,num2 = 0;
        mid=k/2;

        for(j=2 ; j*j<=k ; j++)
        {
            if(k%j==0)
            {
                countNum = 1;
                break;
            }
            //num2++;
        }

        if(countNum == 0 && k >1)
            cout<<k<<" ";
            //cout<<k<<" -> "<<num2<<endl;
    }

    return 0;
}

*/


/******************/


/*

#include <iostream>
using namespace std;
#include <math.h>
#define size 100001
int array [size];


void sieve()
{
    int i,j,root;

     for(i=2; i<size; i++)
    {
        array[i]=1;
    }

    root = sqrt(size);

    for(i=2; i<=root; i++)
    {
        if(array[i]==1)
        {
             for(j=2; i*j<=size; j++)
            {
                array[i * j] = 0;
            }
        }
    }

}


int main()
{
    int T, a, b,i, count;
    sieve();

    cout<<"How many input are you taking = ";
    cin>>T;
    while(T--)
    {
        cout<<"Strat = ";
        cin>>a;
        cout<<"end = ";
        cin>>b;

        count = 0;
        for(i= a; i<= b; i++)
        {
            if(array[i])
            {
                //count++;
                //cout<<i<<" = "<<array[i]<<endl;
                cout<<i<<" ";
            }
            //cout<<i<<" = "<<array[i]<<endl;
        }
        //cout<<count<<endl;
        cout<<endl;
    }
    return 0;
}

*/

/*
How many input are you taking = 3
Input : Strat = 1
        end = 100
Output: 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 
Input : Strat = 100
        end = 200
Output: 101 103 107 109 113 127 131 137 139 149 151 157 163 167 173 179 181 191 193 197 199
Input : Strat = 200
        end = 350
Output: 211 223 227 229 233 239 241 251 257 263 269 271 277 281 283 293 307 311 313 317 331 337 347 349 
*/

