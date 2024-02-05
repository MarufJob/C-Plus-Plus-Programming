#include <iostream>
using namespace std;

int main() {
    
    int row,col,k,num;
    
    cout <<"Give number for pattern printing = ";
    cin >> num;
    
    for(row=1 ; row<=num ; row++){
        
        // space print
        for(col=1 ; col<=num-row ; col++){
            cout <<"  ";
        }
        
        // star print
        for(col=1 ; col<=row ; col++){
            cout <<row<<" ";
        }
        cout<<endl;
    }

    return 0;
}


/*
Input: Give number for pattern printing = 5
Output:         1
              2 2
            3 3 3
          4 4 4 4
        5 5 5 5 5

*/