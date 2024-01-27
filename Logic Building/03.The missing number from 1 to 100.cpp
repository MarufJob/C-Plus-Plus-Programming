/*
The sum of the numbers from 1 to 100 can be calculated using the formula for the sum of an arithmetic series: S = n/2 * (a + l) Where S is the sum, n is the number of terms, a is the first term, and l is the last term.

In this case, n = 100, a = 1, and l = 100, so the sum is: S = 100/2 * (1 + 100) = 50 * 101 = 5050
*/
#include <iostream>
using namespace std;
int main() {
   
   int i, sum, sum1=0;
   
   //formula for the sum of an arithmetic series
   sum = 100/2*(1+100);
   
   for(int i = 1; i <= 100; i++){
       
        if(i==55){
            cout <<endl;
            continue;
        }
        cout <<i<<endl;
        sum1 += i;
   }
   cout << "\nMissing Number = "<< sum-sum1 << endl;

    return 0;
}
/*
Output: 1
        2
        3
        4
        5
        6
        7
        8
        9
        10
        11
        12
        13
        14
        15
        16
        17
        18
        19
        20
        21
        22
        23
        24
        25
        26
        27
        28
        29
        30
        31
        32
        33
        34
        35
        36
        37
        38
        39
        40
        41
        42
        43
        44
        45
        46
        47
        48
        49
        50
        51
        52
        53
        54
        
        56
        57
        58
        59
        60
        61
        62
        63
        64
        65
        66
        67
        68
        69
        70
        71
        72
        73
        74
        75
        76
        77
        78
        79
        80
        81
        82
        83
        84
        85
        86
        87
        88
        89
        90
        91
        92
        93
        94
        95
        96
        97
        98
        99
        100
        
        Missing Number = 55
*/