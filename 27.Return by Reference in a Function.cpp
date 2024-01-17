#include <iostream>
using namespace std;

// global variable
int num;

// function declaration
int& test();

int main() {

  // assign 5 to num variable
  // equivalent to num = 5;
  test() = 7;

  cout <<"Return by Reference = " << num;

  return 0;
}

// function definition
// returns the address of num variable
int& test() {
  return num;
}

/*
Output: Return by Reference = 7
*/