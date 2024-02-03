#include <iostream>
using namespace std;

int main() {
    
    int i,j,num;
    
    cout <<"Give number for pattern printing = ";
    cin >> num;
    
    for(i=num ; i>=1 ; i--){
        for(j=1 ; j<=i ; j++){
            cout <<"* ";
        }
        cout<<endl;
    }

    return 0;
}


/*
Input: Give number for pattern printing = 5
Output: * * * * * 
        * * * * 
        * * * 
        * * 
        * 
*/