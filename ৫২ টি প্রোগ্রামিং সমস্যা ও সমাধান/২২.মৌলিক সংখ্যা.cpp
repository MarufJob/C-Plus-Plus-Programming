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