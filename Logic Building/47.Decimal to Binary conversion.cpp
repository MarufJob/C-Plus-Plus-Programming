#include <iostream>
using namespace std;

int main() {
    int num;
    cout <<"Give a number = ";
    cin >>num;
    
    int rem,ans=0,mul=1;
    
    while(num>0)
    {
        rem=num%2;  //1,0,0,1,0,0,1
        
        num=num/2;  //36,18,9,4,2,1,0
        
        ans=rem*mul+ans;    //1,1,1,1001,1001,1001,1001001
        
        mul=mul*10;     //10,100,1000,10000,100000,1000000
    }
    
    cout <<"Decimal to Binary conversion = "<<ans;

    return 0;
}

/*
Input: Give a number = 73
Output: Decimal to Binary conversion = 1001001

Input: Give a number = 85
Output: Decimal to Binary conversion = 1010101
*/