#include <iostream>
using namespace std;

int main() {
    
    int row,col,num;
    
    cout <<"Give number for pattern printing = ";
    cin >> num;
    
    for(row=1 ; row<=num ; row++){

        // space print
        for(col=1 ; col<=row-1 ; col++){
            cout <<"  ";
        }

        // star print
         for(col=1 ; col<=2*(num-row)+1 ; col++){
            cout <<"* ";
        }

        cout<<endl;
    }


    // for(row=num ; row>=1 ; row--){

    //     // space print
    //     for(col=1 ; col<=num-row ; col++){
    //         cout <<"  ";
    //     }

    //     // star print
    //      for(col=1 ; col<=2*row-1 ; col++){
    //         cout <<"* ";
    //     }

    //     cout<<endl;
    // }

    return 0;
}


/*
Input: Give number for pattern printing = 5
Output:     * * * * * * * * * 
              * * * * * * * 
                * * * * * 
                  * * * 
                    * 
*/
