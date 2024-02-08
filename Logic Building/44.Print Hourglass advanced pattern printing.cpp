#include <iostream>
using namespace std;

int main() {

    int row,col,num;

    cout <<"Give number for pattern printing = ";
    cin >> num;

    for(row=num ; row>=1 ; row--){

        // space print
        for(col=1 ; col<=num-row ; col++){
            cout <<" ";
        }

        // star print
         for(col=1 ; col<=2*row-1 ; col++){
            cout <<"*";
        }

        // for(col=1 ; col<=row ; col++){
        //     cout <<"* ";
        // }

        // for(col=1 ; col<=row-1 ; col++){
        //     cout <<"* ";
        // }

        cout<<endl;
    }
    
    
    for(row=2 ; row<=num ; row++){

        // space print
        for(col=1 ; col<=num-row ; col++){
            cout <<" ";
        }

        // star print
         for(col=1 ; col<=2*row-1 ; col++){
            cout <<"*";
        }

        // for(col=1 ; col<=row ; col++){
        //     cout <<"* ";
        // }

        // for(col=1 ; col<=row-1 ; col++){
        //     cout <<"* ";
        // }

        cout<<endl;
    }

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

/*
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Give number for pattern printing = ";
    cin >> num;

    // Upper half
    for (int row = num; row >= 1; row--) {
        // Print leading spaces
        cout << string(num - row, ' ');

        // Print stars
        cout << string(2 * row - 1, '*') << endl;
    }

    // Lower half
    for (int row = 2; row <= num; row++) {
        // Print leading spaces
        cout << string(num - row, ' ');

        // Print stars
        cout << string(2 * row - 1, '*') << endl;
    }

    return 0;
}



Certainly! Let's break down the optimized version of your code to make it clearer:

Input: Ask the user for a number to determine the size of the pattern.

Upper Half Pattern:

Start a loop from row = num (the user input) down to row = 1. This loop controls the number of rows in the upper half of the pattern.
For each row, print leading spaces. The number of leading spaces decreases as the row number decreases (string(num - row, ' ') generates a string with num - row spaces).
Print the stars for each row. The number of stars in each row is 2 * row - 1, which increases as the row number decreases (string(2 * row - 1, '*') generates a string with 2 * row - 1 stars).
Move to the next line after printing the stars for each row.
Lower Half Pattern:

Start another loop from row = 2 up to row = num. This loop controls the number of rows in the lower half of the pattern.
The process is similar to the upper half:
Print leading spaces.
Print stars.
Move to the next line after printing the stars for each row.
By breaking down the code and explaining each part, it should be clearer how the pattern is generated. This optimized version avoids nested loops and uses string generation to simplify the code while achieving the same result.

*/