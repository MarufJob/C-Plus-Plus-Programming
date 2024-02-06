#include <iostream>
using namespace std;

int main() {
    
    int row,col,num;
    
    cout <<"Give number for pattern printing = ";
    cin >> num;
    
    for(row=1 ; row<=num ; row++){

        // space print
        for(col=1 ; col<=num-row ; col++){
            cout <<"  ";
        }

        // star print
        for(col=1 ; col<=row ; col++){
            cout <<col<<" ";
        }
        
        for(col=row-1 ; col>=1 ; col--){
            cout <<col<<" ";
        }
        
        cout<<endl;
    }

    return 0;
}


/*
Input: Give number for pattern printing = 5
Output:         1 
              1 2 1 
            1 2 3 2 1 
          1 2 3 4 3 2 1 
        1 2 3 4 5 4 3 2 1 
*/