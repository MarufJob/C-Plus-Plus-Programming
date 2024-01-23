// C++ Program to store GPA of n number of students and display it
// where n is the number of students entered by the user

#include <iostream>
using namespace std;

int main() {

  int num;
  cout << "Enter total number of students: ";
  cin >> num;
  //float* ptr;
  float *ptr;
    
  // memory allocation of num number of floats
  ptr = new float[num];

  cout << "Enter GPA of students." << endl;
  for (int i = 0; i < num; ++i) {
    cout << "Student" << i + 1 << ": ";
    cin >> *(ptr + i);
  }

  cout << "\nDisplaying GPA of students." << endl;
  for (int i = 0; i < num; ++i) {
    cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
  }

  // ptr memory is released
  delete[] ptr;

  return 0;
}

/*
Input:  Enter total number of students: 5
        Enter GPA of students.
        Student1: 3.11
        Student2: 3.33
        Student3: 3.55
        Student4: 3.77
        Student5: 3.99
Output: Displaying GPA of students.
        Student1: 3.11
        Student2: 3.33
        Student3: 3.55
        Student4: 3.77
        Student5: 3.99
*/