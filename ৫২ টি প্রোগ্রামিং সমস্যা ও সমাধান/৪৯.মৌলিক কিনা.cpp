//Wrong Answer
#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    int i,j,t,count,num,root;
    
    cout<<"How many input are you taking = ";
    cin>>t;
    cin.ignore();// Consume the newline character after inputting the string
    
    for(i=1 ; i<=t ; i++)
    {
        count = 0;
        cout<<"Give a number = ";
        cin>>num;
        
        count = 0;
        root = sqrt(num);
    
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
        
        //cout<<count<<endl;
        if(count == 0) //&& k >1)
        cout<<num<<" is a prime"<<endl;
            
        else
        cout<<num<<" is not a prime"<<endl;
    }
    return 0;
}
