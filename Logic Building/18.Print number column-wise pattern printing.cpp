#include <iostream>
using namespace std;

int main() {
    
    int i,j,n;
    
    cout<<"Give number for Square = ";
    cin >> n;
    
    for(i=1 ; i<=n ; i++){
        for(j=1 ; j<=n ; j++){
            cout <<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}


/*
Input: Give number for Square = 5
Output: 1 2 3 4 5 
        1 2 3 4 5 
        1 2 3 4 5 
        1 2 3 4 5 
        1 2 3 4 5 
*/