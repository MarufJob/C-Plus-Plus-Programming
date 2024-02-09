#include <iostream>
using namespace std;

int main() {
    int num;
    cout <<"Give a decimal number = ";
    cin >>num;
    
    int rem,ans=0,mul=1;
    
    while(num>0)
    {
        rem=num%8; 
        
        num=num/8; 
        
        ans=rem*mul+ans;
        
        mul=mul*10;     
    }
    
    cout <<"Decimal to Octal conversion = "<<ans;

    return 0;
}

/*
Input: Give a decimal number = 75
Output: Decimal to Octal conversion = 113

Input: Give a decimal number = 85
Output: Decimal to Octal conversion = 125
*/