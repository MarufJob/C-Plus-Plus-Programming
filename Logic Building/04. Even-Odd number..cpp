#include <iostream>
using namespace std;
int main() {
   
   int n;
   cout<< "Give a number = " ;
   cin >>n;
   
   if(n%2==0)
   cout<< "Even number = " << n;
   
   else
   cout<< "Odd number = " << n;

    return 0;
}

/*
Input: Give a number = 25
Output: Odd number = 25

Input: Give a number = 50
Output: Even number = 50
*/