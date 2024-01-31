#include <iostream>
using namespace std;

int main() {
    int i,n,sum;
    
    cout<<"Give me a number = ";
    cin >> n;
    
    for(i=1 ; i<=n ; i++){
        //sum=sum+i;
        sum += i;
    }
    cout <<"Sum of n natural numbers = "<< sum<<endl;

    return 0;
}

/*
Input: Give me a number = 9
Output: Sum of n natural numbers = 45

Input: Give me a number = 15
Output: Sum of n natural numbers = 120
*/