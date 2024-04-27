#include <iostream>
using namespace std;

int main() {
    int i,j,num;
    
    cin>>num;
    
    for(i=1 ; i<=num ; i++)
    {
        for(j=2 ; j<=i/2 ; j++)
        {
            if(i%j==0)
            break;
            
            else
            cout<<i<<" ";
        }
    }

    return 0;
}

/*
#include <iostream>
using namespace std;

int main() {
    int i,j,num;
    
    cout<<"Give a number = ";
    cin>>num;
    
    if(num<2)
    {
        cout<<num<<"is not prime";
    }
    
        for(j=2 ; j<num ; j++)
        {
            if(i%j==0)
            cout<<"Not Prime";
            break;
            
            // if(i%j!=0 || j==i/2)
            // cout<<i<<" ";
            
            // else
            // {
            // cout<<i<<" ";
            // break;
            // }
        }
        //cout<<"Prime";
    // }

    return 0;
}
*/
