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
        
        // number print
        for(col=row ; col>=1 ; col--){
            cout <<col<<" ";
        }
        cout<<endl;
    }

    return 0;
}


/*
Input: Give number for pattern printing = 5
Output:         1
              2 1
            3 2 1
          4 3 2 1
        5 4 3 2 1

*/