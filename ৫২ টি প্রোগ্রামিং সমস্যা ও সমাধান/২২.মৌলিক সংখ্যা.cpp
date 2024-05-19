#include <iostream>
#include <cstring>

using namespace std;

int main() 
{
    
    int t,i,j,k,l,num,count;
    
    cout<<"How many input are you taking = ";
    cin>>t;
    cin.ignore();// Consume the newline character after inputting the string
    
    for(i=1 ; i<=t ; i++)
    {
        //int i,j,k,mid,num;
        count = 0;

        cout<<"Strat = ";
        cin>>l;
        cout<<"end = ";
        cin>>num;


        for(k=l ; k<=num ; k++)
        {
            int countNum = 0,num2 = 0;
    
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
                count++;
                //cout<<k<<" -> "<<num2<<endl;
                //cout<<k<<" ";
        }
        //cout<<"T = "<<t<<"  "<<count<<endl;
        cout<<count<<endl;
        //cout<<endl;
    }
    
    return 0;
}


/*
How many input are you taking = 5
Input : Strat = 1
        end = 5
Output: 3
Input : Strat = 25
        end = 50
Output: 6
Input : Strat = 12
        end = 27
Output: 4
Input : Strat = 94635
        end = 99735
Output: 443
Input : Strat = 91752
        end = 95402
Output: 332
*/


/**************************/

/*

#include <iostream>
using namespace std;
#include <math.h>
#define size 100001
//int array [size];
bool array[size];


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
                count++;
            }
            //cout<<i<<" = "<<array[i]<<endl;
        }
        cout<<count<<endl;
        cout<<endl;
    }
    return 0;
}

*/


/*
How many input are you taking = 5
Input : Strat = 1
        end = 5
Output: 3
Input : Strat = 25
        end = 50
Output: 6
Input : Strat = 12
        end = 27
Output: 4
Input : Strat = 94635
        end = 99735
Output: 443
Input : Strat = 91752
        end = 95402
Output: 332
*/
