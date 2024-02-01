#include <iostream>
using namespace std;

int main() {
    
    int i,j,n;
    
    cout<<"Give number for Square = ";
    cin >> n;
    
    for(i=1 ; i<=n ; i++){
        for(j=1 ; j<=n ; j++){
            cout << "* ";
        }
        cout<<endl;
    }
    
    return 0;
}

/*
Input: Give number for Square = 5
Output: * * * * * 
        * * * * * 
        * * * * * 
        * * * * * 
        * * * * * 
*/

/*
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Give number for Square = ";
    cin >> n;

    for (int i = 0; i < n * n; i++) {
        cout << "* ";
        if ((i + 1) % n == 0) {
            cout << endl;
        }
    }

    return 0;
}

    This version uses a single loop and calculates the row breaks based on the condition (i + 1) % n == 0. It prints an asterisk and checks if it's time to start a new line after every n iterations. This can be more efficient than having two nested loops for larger values of n.

/////////////

    for (int i = 0; i < n * n; i++)
        cout << "* " << (i % n == n - 1 ? "\n" : " ");
    
    
    In this version, I used the conditional operator (? :) to decide whether to insert a newline character based on the condition i % n == n - 1. This way, the code remains concise and avoids an additional if statement inside the loop.
*/