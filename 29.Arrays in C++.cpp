#include <iostream>
using namespace std;

int main() {

//   // declare and initialize and array
//   int x[6] = {19, 10, 8, 17, 9, 15};
    
//   // declare and initialize an array
//   int x[] = {19, 10, 8, 17, 9, 15};


  int numbers[5] = {7, 5, 6, 12, 35};

  cout << "The numbers are: ";

  //  Printing array elements
  // using range based for loop
  for (const int &n : numbers) {
    cout << n << "  ";
  }

  cout << "\nThe numbers are: ";

  //  Printing array elements
  // using traditional for loop
  for (int i = 0; i < 5; ++i) {
    cout << numbers[i] << "  ";
  }

  return 0;
}

/*
Output: The numbers are: 7  5  6  12  35  

Output: The numbers are: 7  5  6  12  35 
*/
