#include <iostream>
using namespace std;

int main() {
    
    int i,j,num;
    
    cout <<"Give number for pattern printing = ";
    cin >> num;
    
    for(i=1 ; i<=num ; i++){
        for(j=1 ; j<=i ; j++){
            cout <<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}


/*
Input: Give number for pattern printing = 5
Output: 1 
        1 2 
        1 2 3 
        1 2 3 4 
        1 2 3 4 5 
*/