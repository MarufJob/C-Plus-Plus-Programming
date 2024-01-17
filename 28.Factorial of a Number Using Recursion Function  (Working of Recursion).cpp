// Factorial of n = 1*2*3*...*n

#include <iostream>
using namespace std;

int factorial(int);

int main() {
    int n, result;

    cout << "Enter a non-negative number: ";
    cin >> n;

    result = factorial(n);
    cout << "Factorial of " << n << " = " << result;
    return 0;
}

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}

/*
Input: Enter a non-negative number: 3
Output: Factorial of 3 = 6

Input: Enter a non-negative number: 5
Output: Factorial of 5 = 120

Input: Enter a non-negative number: 7
Output: Factorial of 7 = 5040
*/