#include <iostream>
using namespace std;

int main() {
    
    int i,j,num;
    char var;
    
    cout <<"Give number for pattern printing = ";
    cin >> num;
    
    for(i=1 ; i<=num ; i++){
            var='a'+i-1;
        for(j=1 ; j<=i ; j++){
            cout <<var<<" ";
        }
        cout<<endl;
    }

    return 0;
}


/*
Input: Give number for pattern printing = 5
Output: a 
        b b 
        c c c 
        d d d d 
        e e e e e  
*/