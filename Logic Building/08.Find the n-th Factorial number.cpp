#include <iostream>
using namespace std;

   //Factorial of a Number Using Recursion
// int factorial(int num){
//     if(num>1)
//     return num*factorial(num-1);
//     else
//     return 1;
// }

int main() {
    int i, n, sum = 1;
    cout << "N-th Factorial number = ";
    cin >>n;
    
    for(i=1 ; i<=n ; i++)
    {
        sum *= i;
    }
    //sum=factorial(n);
    cout << "N-th Factorial number is = "<< sum;
    return 0;
}


/*
Input:  N-th Factorial number = 9
Output: N-th Factorial number is = 362880

Input:  N-th Factorial number = 6
Output: N-th Factorial number is = 720
*/