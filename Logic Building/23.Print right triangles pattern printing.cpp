#include <iostream>
using namespace std;

int main() {
    
    int i,j,num;
    
    cout <<"Give number for pattern printing = ";
    cin >> num;
    
    for(i=0 ; i<num ; i++){
        for(j=0 ; j<=i ; j++){
            cout <<"* ";
        }
        cout<<endl;
    }

    return 0;
}


/*
Input: Give number for pattern printing = 5
Output: * 
        * * 
        * * * 
        * * * * 
        * * * * * 
*/