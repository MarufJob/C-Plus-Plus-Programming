#include <iostream>
using namespace std;

int main() {
    
    int row,col,num;
    
    cout <<"Give number for pattern printing = ";
    cin >> num;
    
    for(row=num ; row>=1 ; row--){

          // star print
        for(col=1 ; col<=row ; col++){
            cout <<"* ";
        }
        
        // space print
        for(col=1 ; col<=2*(num-row) ; col++){
            cout <<"  ";
        }

          // star print
        for(col=1 ; col<=row ; col++){
            cout <<"* ";
        }
        
        cout<<endl;
    }
    
    
    for(row=1 ; row<=num ; row++){

          // star print
        for(col=1 ; col<=row ; col++){
            cout <<"* ";
        }
        
        // space print
        for(col=1 ; col<=2*(num-row) ; col++){
            cout <<"  ";
        }

          // star print
        for(col=1 ; col<=row ; col++){
            cout <<"* ";
        }
        
        cout<<endl;
    }

    return 0;
}


/*
Input: Give number for pattern printing = 5

Output:         * * * * * * * * * * 
                * * * *     * * * * 
                * * *         * * * 
                * *             * * 
                *                 * 
                *                 * 
                * *             * * 
                * * *         * * * 
                * * * *     * * * * 
                * * * * * * * * * * 
*/

/*
#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter the number for pattern printing: ";
    cin >> num;
    
    // Print upper and lower parts of the pattern in a single loop
    for (int row = num, stars = 2 * num - 1, spaces = 0; row >= 1; row--, stars -= 2, spaces += 2) {
        // Print stars
        for (int i = 0; i < stars; i++)
            cout << "* ";
        
        // Print spaces
        for (int i = 0; i < spaces; i++)
            cout << "  ";
        
        // Print stars
        for (int i = 0; i < stars; i++)
            cout << "* ";
        
        cout << endl;
    }

    return 0;
}


Input:

The program prompts the user to enter a number for pattern printing (num).
Loop for Pattern Printing:

The program uses a single loop to handle both the upper and lower parts of the pattern printing process. The loop iterates over row from num to 1.
row represents the current row number being processed.
Calculating Stars and Spaces:

Within the loop, the number of stars (stars) and spaces (spaces) to print on the current row are calculated based on the current value of row.
stars is initialized to 2 * num - 1, which represents the maximum number of stars in a row (for the first row).
spaces is initialized to 0 as there are no spaces initially.
Printing Stars and Spaces:

Within the loop, the stars and spaces are printed for each row.
The loop iterates stars times to print the stars (*) using cout << "* ";.
Then, the loop iterates spaces times to print the spaces ( ) using cout << " ";.
Finally, another loop iterates stars times to print the stars again.
Updating Stars and Spaces:

After printing stars and spaces for the current row, the values of stars and spaces are updated for the next iteration of the loop.
stars is decremented by 2, as the number of stars decreases by 2 for each subsequent row.
spaces is incremented by 2, as the number of spaces increases by 2 for each subsequent row.
Output:

The result is the pattern printed as per the given input number.
This optimized version of the code reduces the complexity by avoiding nested loops and directly calculates the number of stars and spaces needed for each row, resulting in a more efficient solution.
*/
