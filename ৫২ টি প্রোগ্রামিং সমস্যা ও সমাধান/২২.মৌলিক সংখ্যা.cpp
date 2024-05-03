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
