#include <iostream>
using namespace std;

int main() {
    int num;
    cout <<"Give a octal number = ";
    cin >>num;
    
    int rem,ans=0,mul=1;
    
    while(num>0)
    {
        rem=num%10; 
        
        num=num/10; 
        
        ans=rem*mul+ans;
        
        mul=mul*8;     
    }
    
    cout <<"Octal to Decimal conversion = "<<ans;

    return 0;
}

/*
Input: Give a octal number = 113
Output: Octal to Decimal conversion = 75

Input: Give a octal number = 125
Output: Octal to Decimal conversion = 85
*/