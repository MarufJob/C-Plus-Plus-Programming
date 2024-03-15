#include <iostream>
using namespace std;

int main() {

    int row,col,num;

    cout <<"Give number for pattern printing = ";
    cin >> num;


    
    for(row=num/2 ; row<=num-1 ; row++){

        // space print
        for(col=1 ; col<=num-row ; col++){
            cout <<"-";
        }

        // star print
        for(col=1 ; col<=row ; col++){
            cout <<"*";
        }
        
        
        // space print
        for(col=1 ; col<=num/2 ; col++){
            cout <<"-";
        }

        // star print
        for(col=1 ; col<=row ; col++){
            cout <<"*";
        }

        cout<<endl;
    }
    
    
    
    //     // lower part
    //     // inverted pyramid
    //     for(row=num ; row>=1 ; row--){

    //     // space print
    //     for(col=1 ; col<=num-row ; col++){
    //         cout <<" ";
    //     }

    //     // star print
    //      for(col=1 ; col<=2*row-1 ; col++){
    //         cout <<"*";
    //     }

    //     // for(col=1 ; col<=row ; col++){
    //     //     cout <<"* ";
    //     // }

    //     // for(col=1 ; col<=row-1 ; col++){
    //     //     cout <<"* ";
    //     // }

    //     cout<<endl;
    // }
    

    return 0;
}


/*
Input: Give number for pattern printing = 5
Output:     *********
             *******
              *****
               ***
                *
               ***
              *****
             *******
            *********
*/
