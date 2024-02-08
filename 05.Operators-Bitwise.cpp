#include<iostream>
using namespace std;

int main(){
    int ans1=2&3;
    int ans2=2|3;
    int ans3=2^3;
    int ans4=22>>3;
    int ans5=2<<3;
    int ans6=~3;
    int ans7=~-3;
    
    cout <<"Bitwise Operator 2&3 = " <<ans1<<endl;
    cout <<"Bitwise Operator 2|3 = " <<ans2<<endl;
    cout <<"Bitwise Operator 2^3 = " <<ans3<<endl;
    cout <<"Bitwise Operator 22>>3 = " <<ans4<<endl;
    cout <<"Bitwise Operator 2<<3 = " <<ans5<<endl;
    cout <<"Bitwise Operator ~3 = " <<ans6<<endl;
    cout <<"Bitwise Operator ~-3 = " <<ans7<<endl;


    return 0;
}


/*
Output: Bitwise Operator 2&3 = 2
        Bitwise Operator 2|3 = 3
        Bitwise Operator 2^3 = 1
        Bitwise Operator 22>>3 = 2
        Bitwise Operator 2<<3 = 16
        Bitwise Operator ~3 = -4
        Bitwise Operator ~-3 = 2

*/