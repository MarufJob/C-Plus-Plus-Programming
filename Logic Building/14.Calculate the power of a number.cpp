#include <iostream>
using namespace std;

int main() {
    int i,m=1,n,pow;
    
    cout<<"Enter the number = ";
    cin >> n;
    
    cout<<"Enter the power = ";
    cin >> pow;
    
    for(i=1 ; i<=pow ; i++){
        m =m*n;
    }
    cout <<"The numer is = "<<m <<endl;

    return 0;
}

/*
Input:  Enter the number = 5
        Enter the power = 4
Output: The numer is = 625

Input:  Enter the number = 7
        Enter the power = 3
Output: The numer is = 343
*/