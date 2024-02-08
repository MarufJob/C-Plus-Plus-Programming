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

/*
The output comments explain the result of each operation:

2 & 3 = 2: Bitwise AND operation results in 2 because binary 2 (10) AND binary 3 (11) is binary 2 (10).
2 | 3 = 3: Bitwise OR operation results in 3 because binary 2 (10) OR binary 3 (11) is binary 3 (11).
2 ^ 3 = 1: Bitwise XOR operation results in 1 because binary 2 (10) XOR binary 3 (11) is binary 1 (01).
22 >> 3 = 2: Right shift operation on binary 22 (10110) by 3 positions gives binary 2 (10).
2 << 3 = 16: Left shift operation on binary 2 (10) by 3 positions gives binary 16 (10000).
~3 = -4: Bitwise NOT operation on binary 3 (11) results in binary -4 (111...1100).
~-3 = 2: Bitwise NOT operation on binary -3 (111...1101) results in binary 2 (10).
*/
