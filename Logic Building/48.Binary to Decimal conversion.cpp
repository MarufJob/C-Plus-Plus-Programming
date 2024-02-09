#include <iostream>
using namespace std;

int main() {
    int num;
    cout <<"Give a binary number = ";
    cin >>num;
    
    int rem,ans=0,mul=1;
    
    while(num>0)
    {
        rem=num%10; 
        
        num=num/10; 
        
        ans=rem*mul+ans;
        
        mul=mul*2;     
    }
    
    cout <<"Binary to Decimal conversion = "<<ans;

    return 0;
}

/*
Input: Give a binary number = 1001001
Output: Binary to Decimal conversion = 73

Input: Give a binary number = 1010101
Output: Binary to Decimal conversion = 85
*/