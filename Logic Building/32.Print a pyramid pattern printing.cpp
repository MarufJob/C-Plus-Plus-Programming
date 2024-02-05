#include <iostream>
using namespace std;

int main() {
    
    int i,j,k,num;
    
    cout <<"Give number for pattern printing = ";
    cin >> num;
    
    for(i=1 ; i<=num ; i++){
        
        // space print
        for(j=1 ; j<=num-i ; j++){
            cout <<" ";
        }
        
        // star print
        for(k=1 ; k<=i ; k++){
            cout <<"* ";
        }
        cout<<endl;
    }

    return 0;
}


/*
Input: Give number for pattern printing = 5
Output:     *
           * *
          * * *
         * * * *
        * * * * *

*/
