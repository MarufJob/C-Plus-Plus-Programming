#include <iostream>
using namespace std;

int main() {

  int numbers[15];

  cout << "Enter 15 numbers: " ;

  //  store input from user to array
  for (int i = 0; i < 15; ++i) {
    cin >> numbers[i];
  }

  cout << "The numbers are: ";

  //  print array elements
  for (int n = 0; n < 15; ++n) {
    cout << numbers[n] << "  ";
  }

  return 0;
}
/*
Input: Enter 15 numbers: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
Output: The numbers are: 1  2  3  4  5  6  7  8  9  10  11  12  13  14  15

Input: Enter 15 numbers: 11 22 33 44 55 66 77 88 99 111 222 333 444 555 666
Output: The numbers are: 11  22  33  44  55  66  77  88  99  111  222  333  444  555  666 
*/