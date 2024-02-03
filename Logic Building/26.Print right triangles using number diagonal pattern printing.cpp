#include <iostream>
using namespace std;

int main() {
    
    int i,j,num;
    
    cout <<"Give number for pattern printing = ";
    cin >> num;
    
    for(i=1 ; i<=num ; i++){
        for(j=i ; j>=1 ; j--){
            cout <<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}


/*
Input: Give number for pattern printing = 5
Output: 1 
        2 1 
        3 2 1 
        4 3 2 1 
        5 4 3 2 1 
*/