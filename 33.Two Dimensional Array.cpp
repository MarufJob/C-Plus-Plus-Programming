// C++ Program to display all elements
// of an initialized two-dimensional array

#include <iostream>
using namespace std;

int main() {
    int test[5][3] = {{12, -17, 33},
                      {64, 0, 78},
                      {19, 51, 11},
                      {90, 81,  77},
                      {59, 111, 39}};

    // use of nested for loop
    // access rows of the array
    for (int i = 0; i < 5; ++i) {

        // access columns of the array
        for (int j = 0; j < 3; ++j) {
            cout << "test[" << i << "][" << j << "] = " << test[i][j] << endl;
        }
    }

    return 0;
}

/*
Output: test[0][0] = 12
        test[0][1] = -17
        test[0][2] = 33
        test[1][0] = 64
        test[1][1] = 0
        test[1][2] = 78
        test[2][0] = 19
        test[2][1] = 51
        test[2][2] = 11
        test[3][0] = 90
        test[3][1] = 81
        test[3][2] = 77
        test[4][0] = 59
        test[4][1] = 111
        test[4][2] = 39
*/
