#include <iostream>
using namespace std;

int main() {
    int i,n;
    
    cout<<"Give me a number = ";
    cin >> n;
    
    for(i=1 ; i<=10 ; i++)
    cout << n<<" * "<<i<<" = "<<i*n<<endl;

    return 0;
}


/*
Input: Give me a number = 5
Output: 5 * 1 = 5
        5 * 2 = 10
        5 * 3 = 15
        5 * 4 = 20
        5 * 5 = 25
        5 * 6 = 30
        5 * 7 = 35
        5 * 8 = 40
        5 * 9 = 45
        5 * 10 = 50

Input: Give me a number = 9
Output: 9 * 1 = 9
        9 * 2 = 18
        9 * 3 = 27
        9 * 4 = 36
        9 * 5 = 45
        9 * 6 = 54
        9 * 7 = 63
        9 * 8 = 72
        9 * 9 = 81
        9 * 10 = 90
*/