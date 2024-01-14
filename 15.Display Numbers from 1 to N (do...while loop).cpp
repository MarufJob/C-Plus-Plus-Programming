#include <iostream>

using namespace std;

int main() {
    int i = 1,n; 
    cin >>n;
    // do...while loop has done work at least one time
    do {
        cout << i << " ";
        ++i;
    }
    while (i <= n);
    
    return 0;
}
/*
Input:10
Output:1 2 3 4 5 6 7 8 9 10 

Input:25
Output:1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 
*/