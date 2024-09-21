#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    int i,j,k,t,count,num1,num2,root;
    
    cout<<"How many input are you taking = ";
    cin>>t;
    cin.ignore();// Consume the newline character after inputting the string
    
    for(i=1 ; i<=t ; i++)
    {
        count = 0;

        cout<<"Number = ";
        cin>>num1;
        //cout<<"end = ";
        //cin>>num2;


        //for(k=num1 ; k<=num2 ; k++)
        //{
            int countNum = 0;//loop_iteration = 0;
            root = sqrt(num1);
    
            //for(j=2 ; j<=k/j ; j++)
            //for(j=2 ; j*j<=k ; j++)
            for(j=2 ; j<=root ; j++)
            {
                if(num1%j==0)
                {
                    countNum = 1;
                    break;
                }
                //loop_iteration++;
            }
            
            cout<<countNum<<endl;
            if(countNum == 0) //&& k >1)
            cout<<num1<<" is a prime"<<endl;
                //count++;
                //cout<<k<<" -> "<<loop_iteration<<endl;
                //cout<<k<<" ";
            else
            cout<<num1<<" is not a prime"<<endl;
        //}
        //cout<<"T = "<<t<<"  "<<count<<endl;
        //cout<<count<<endl;
        //cout<<endl;
    }
    return 0;
}
