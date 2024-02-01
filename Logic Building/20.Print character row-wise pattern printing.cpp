#include <iostream>
using namespace std;

int main() {
    
    int i,j,n;
    
    cout<<"Give number for pattern printing = ";
    cin >> n;
    
    for(i=1 ; i<=n ; i++){
        char name='a'+(i-1);
        for(j=n ; j>=1 ; j--){
            cout <<name<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

/*
Input: Give number for pattern printing = 5
Output: a a a a a 
        b b b b b 
        c c c c c 
        d d d d d 
        e e e e e  
*/