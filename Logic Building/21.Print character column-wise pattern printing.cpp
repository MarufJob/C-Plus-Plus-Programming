#include <iostream>
using namespace std;

int main() {
    
    int i,j,n;
    
    cout<<"Give number for pattern printing = ";
    cin >> n;
    
    for(i=1 ; i<=n ; i++){
        for(j=1 ; j<=n ; j++){
            char name='a'+(j-1);
            cout <<name<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

/*
Input: Give number for pattern printing = 5
Output: a b c d e 
        a b c d e 
        a b c d e 
        a b c d e 
        a b c d e  
*/