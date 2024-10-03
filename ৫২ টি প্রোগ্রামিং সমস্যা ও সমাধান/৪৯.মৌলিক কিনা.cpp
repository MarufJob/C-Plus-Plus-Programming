#include <iostream>
using namespace std;

int main() 
{
    int i,t,count;
    long long int j,num;
    
    cout<<"How many input are you taking = ";
    cin>>t;
    
    for(i=1 ; i<=t ; i++)
    {
        count = 0;
        cout<<"Give a number = ";
        cin>>num;
        
        count = 0;
        
        if(num<2)
        {
            cout<<num<<" is not a prime"<<endl;
        }
        
        else
        {
            for(j=2 ; j<num ; j++)
            {
                if(num%j==0)
                {
                    count = 1;
                    break;
                }
            }
            
            if(count == 0)
            cout<<num<<" is a prime"<<endl;
                
            else
            cout<<num<<" is not a prime"<<endl;
        }
    }
    return 0;
}



/*
How many input are you taking = 5
Input :Give a number = -5
Output:-5 is not a prime
Input :Give a number = 5
Output:5 is a prime
Input :Give a number = 101
Output:101 is a prime
Input :Give a number = 555555555555
Output:555555555555 is not a prime
Input :Give a number = 9223372036854775783
Output:
=== Session Ended. Please Run the code again ===
*/



/*
                *************** Noted ***************
9,223,372,036,854,775,783 iterations, take how many time?

To estimate how long it would take to perform 9,223,372,036,854,775,783 iterations (approximately 9.2 quintillion iterations), we need to make some assumptions about how many iterations can be performed per second.

Iterations per Second:
On a modern CPU, basic operations (like checking if a number is divisible) can be performed very quickly. However, real-world performance depends on factors such as the CPU's clock speed, efficiency, and the complexity of the operations.

For the sake of estimation:

A basic operation could take anywhere from 1 nanosecond (ns) (1 billionth of a second) to 1 microsecond (µs) (1 millionth of a second) on a modern CPU.
This would mean 1 billion to 1 million iterations per second, assuming that no significant overhead (like input/output) slows things down.


Estimating Time:
1.If 1 billion iterations per second:
        Time= 9,223,372,036,854,775,783/1,000,000,000 = 9,223,372,037 seconds
  Convert seconds to years:
        Time= 9,223,372,037/60*60*24*365 ≈ 292 years
        
2.If 1 million iterations per second:
        Time= 9,223,372,036,854,775,783/1,000,000 = 9,223,372,036,855 seconds
  Convert seconds to years:
        Time= 9,223,372,036,855/60*60*24*365 ≈ 292,471 years

Conclusion:
If your CPU can perform 1 billion iterations per second, it would take approximately 292 years to complete 9.2 quintillion iterations.
If your CPU performs 1 million iterations per second, it would take approximately 292,471 years.
This means that performing 9.2 quintillion iterations is practically infeasible within a reasonable time frame on a conventional computer without using significant optimizations or parallel processing.
*/



/*
//Wrong Answer
#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    int i,t,count,root;
    long long int j,num;
    
    cout<<"How many input are you taking = ";
    cin>>t;
    
    for(i=1 ; i<=t ; i++)
    {
        count = 0;
        cout<<"Give a number = ";
        cin>>num;
        
        root = sqrt(num);
        
        if(num<2)
        {
            cout<<num<<" is not a prime"<<endl;
        }
        
        else
        {
            //for(j=2 ; j<=k/j ; j++)
            //for(j=2 ; j*j<=k ; j++)
            for(j=2 ; j<=root ; j++)
            {
                if(num%j==0)
                {
                    count = 1;
                    break;
                }
            }
            
            if(count == 0)
            cout<<num<<" is a prime"<<endl;
                
            else
            cout<<num<<" is not a prime"<<endl;
        }
    }
    return 0;
}
*/



/*
#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    int i,t,count,root;
    long long int j,num;
    
    cout<<"How many input are you taking = ";
    cin>>t;
    
    for(i=1 ; i<=t ; i++)
    {
        count = 0;
        cout<<"Give a number = ";
        cin>>num;
        
        root = sqrt(num);
        
        if(num<2)
        {
            cout<<num<<" is not a prime"<<endl;
        }
        
        else if(num==2)
        {
            cout<<num<<" is a prime"<<endl;
        }
        
        else if(num%2==0)
        {
            cout<<num<<" is not a prime"<<endl;
        }
        
        else
        {
            //for(j=2 ; j<=k/j ; j++)
            //for(j=2 ; j*j<=k ; j++)
            for(j=3 ; j<=root ; j=j+2)
            {
                //cout<<j<<endl;
                if(num%j==0)
                {
                    count = 1;
                    break;
                }
            }
            
            if(count == 0)
            cout<<num<<" is a prime"<<endl;
                
            else
            cout<<num<<" is not a prime"<<endl;
        }
    }
    return 0;
}
*/



/*
How many input are you taking = 5
Input :Give a number = 9223372036854775783
Output:9223372036854775783 is a prime
Input :Give a number = 5
Output:9223372036854774999 is a prime
Input :Give a number = 9223372036854574879
Output:9223372036854574879 is a prime
Input :Give a number = 9223372036757
Output:9223372036757 is not a prime
Input :Give a number = 999999999989
Output:999999999989 is a prime
*/









#include <iostream>
#include <math.h>
using namespace std;
//#define size 1000001
//int array [size];



/*
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
*/



void find_prime_number(int prime_are[], int n)
{
    int i,j,root;
/*
     for(i=2; i<size; i++)
    {
        array[i]=1;
    }
*/
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





int main() {
    int prime_ara[1000000];
    int i,T,sqrt_n;
    long long int N;
    
    cin>>T;
    
    while(T--)
    {
        cin>>N;
        sqrt_n = sqrt(N);
        find_prime_number(prime_ara, sqrt_n);
        int is_prime = 1;
        
        for(i = 0; prime_ara[i] <= sqrt_n; i++)
        {
            if(N % prime_ara[i] == 0)
            {
                is_prime = 0;
                break;
            }
        }
        
        if(is_prime == 1)
        cout<<N<<" is a prime"<<endl;
        
        else
        cout<<N<<" is not a prime"<<endl;
    }
    return 0;
}










#include <iostream>
#include <math.h>
using namespace std;
//#define size 1000001
//int array [size];



/*
// void sieve()
// {
//     int i,j,root;

//      for(i=2; i<size; i++)
//     {
//         array[i]=1;
//     }

//     root = sqrt(size);

//     for(i=2; i<=root; i++)
//     {
//         if(array[i]==1)
//         {
//              for(j=2; i*j<=size; j++)
//             {
//                 array[i * j] = 0;
//             }
//         }
//     }

// }
*/



void find_prime_number(int prime_are[])
{
    int i,j,root;
    
    int size = 100;
    root = sqrt(size);

    for(i=2; i<size; i++)
    {
        prime_are[i]=1;
    }

    

    for(i=2; i<=root; i++)
    {
        //prime_are[i]=i;
        if(prime_are[i]==1)
        {
            prime_are[i]=i;
            for(j=2; i*j<=size; j++)
            {
                //prime_are[i * j] = 0;
                prime_are[i * j] = i*j;
            }
        }
    }
    
    // for(i=2; i<size; i++)
    // {
    //     cout<<prime_are[i]<<" -- ";
    // }
    // cout<<endl;
}



int main() {
    int prime_ara[100];
    int i,T,sqrt_n;
    long long int N;
    
    cout<<"How many input are you taking = ";
    cin>>T;
    
    while(T--)
    {
        cout<<"Give a number = ";
        cin>>N;
        sqrt_n = sqrt(N);
        
        find_prime_number(prime_ara);
        
        cout<<"-----------------------------------"<<endl;
        
        // for(i=2; i<100; i++)
        // {
        //     cout<<prime_ara[i]<<" -- ";
        // }
        // cout<<endl;
    
        int is_prime = 1;
        
        for(i = 2; prime_ara[i] <= sqrt_n; i++)
        {
            cout<<prime_ara[i]<<" -- ";
            if(N % prime_ara[i] == 0)
            {
                is_prime = 0;
                break;
            }
        }
        
        if(is_prime == 1)
        cout<<N<<" is a prime"<<endl;
        
        else
        cout<<N<<" is not a prime"<<endl;
    }
    return 0;
}
