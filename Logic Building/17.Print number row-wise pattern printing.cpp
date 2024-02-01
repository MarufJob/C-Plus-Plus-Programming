#include <iostream>
using namespace std;

int main() {
    
    int i,j,n;
    
    cout<<"Give number for Square = ";
    cin >> n;
    
    for(i=1 ; i<=n ; i++){
        for(j=1 ; j<=n ; j++){
            cout << i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}


/*
Input: Give number for pattern printing = 5
Output: 1 1 1 1 1 
        2 2 2 2 2 
        3 3 3 3 3 
        4 4 4 4 4 
        5 5 5 5 5 
*/
