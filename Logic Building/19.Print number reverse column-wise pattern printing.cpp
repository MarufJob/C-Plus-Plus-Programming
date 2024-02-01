#include <iostream>
using namespace std;

int main() {
    
    int i,j,n;
    
    cout<<"Give number for Square = ";
    cin >> n;
    
    for(i=1 ; i<=n ; i++){
        for(j=n ; j>=1 ; j--){
            cout <<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}


/*
Input: Give number for pattern printing = 5
Output: 5 4 3 2 1 
        5 4 3 2 1 
        5 4 3 2 1 
        5 4 3 2 1 
        5 4 3 2 1 
*/
