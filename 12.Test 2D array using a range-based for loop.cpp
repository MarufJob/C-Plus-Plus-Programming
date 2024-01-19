#include <iostream>
using namespace std;

// Function to display elements of a 2D array using a range-based for loop
void rangeLoop(int (&arr)[3][2]) {
    // Outer loop: iterate over each row of the 2D array
    for (const auto& row : arr) {
        // Inner loop: iterate over each element in the current row
        for (int element : row) {
            // Print the current element followed by a space
            cout << element << " ";
        }
    }
}

int main() {
    // Initialize a 2D array with 3 rows and 2 columns
    int num[3][2] = {
        {3, 4},
        {9, 5},
        {7, 1}
    };

    // Call the rangeLoop function and pass the 2D array as a parameter
    rangeLoop(num);

    // Return 0 to indicate successful program execution
    return 0;
}

//Output:3 4 9 5 7 1 

/*
void rangeLoop(int (&arr)[3][2]) {
    for (const auto& row : arr) {
        for (int element : row) {
            cout << element << " ";
        }
    }
}



Here, the range-based for loop is used to iterate over the elements of a 2D array (arr). Let's break it down line by line:

for (const auto& row : arr) {:

const auto& row: This declares a reference (&) to each row of the 2D array (arr). const is used to ensure that the elements of the row cannot be modified within the loop.
: arr: Specifies the range to iterate over, which is the 2D array (arr).
This loop iterates over each row of the 2D array.
for (int element : row) {:

int element: This declares a new variable (element) for each element in the current row.
: row: Specifies the range to iterate over, which is the current row obtained from the outer loop.
This inner loop iterates over each element within the current row.
cout << element << " ";:

Prints the current element followed by a space.
This line is within the inner loop, so it prints each element of the row.
}:

End of the inner loop.
}:

End of the outer loop.
So, the entire structure of these nested range-based for loops is designed to traverse each element of the 2D array (arr). The outer loop iterates over each row, and the inner loop iterates over each element within the row. The cout statement inside the inner loop prints each element, and the result is that all elements of the 2D array are displayed.
*/