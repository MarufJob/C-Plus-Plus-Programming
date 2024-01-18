#include <iostream>
using namespace std;

int main() {
    
  // initialize an array without specifying size
  int arr[] = {87, 56, 33, 12, 395, 62, 17};

  double sum = 0;
  double count = 0;
  double average;

  cout << "The arr are: ";

  //  print array elements
  // use of range-based for loop
  for (int &u : arr) {
    cout << u << "  ";

    //  calculate the sum
    sum += u;

    // count the no. of array elements
    ++count;
  }

  // print the sum
  cout << "\nTheir Sum = " << sum << endl;

  // find the average
  average = sum / count;
  cout << "Their Average = " << average << endl;

  return 0;
}

/*
Output: The arr are: 87  56  33  12  395  62  17  
        Their Sum = 662
        Their Average = 94.5714
*/
