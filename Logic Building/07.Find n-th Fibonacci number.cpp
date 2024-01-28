#include <iostream>
using namespace std;
int main() {
    
   //nth Fibonacci = 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610
   int i,j,m=0,n=1,tamp;
   
   cout<< "Give nth Fibonacci number = " ;
   cin >>j;
   
   
    for( i=3 ;i<=j ;i++)
   {
       tamp=m+n;
       m=n;
       n=tamp;
   }
   cout<< "Fibonacci nth number = "<<tamp<<endl;
   
    return 0;
}

/*
Input: Give nth Fibonacci number = 5
Output: Fibonacci nth number = 3

Input: Give nth Fibonacci number = 16
Output: Fibonacci nth number = 610
*/