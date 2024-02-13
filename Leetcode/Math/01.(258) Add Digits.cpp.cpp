class Solution {
public:
    int addDigits(int num) {
        while(num>9){

        int ans=0 ,rem;
        
        while(num!=0){
            rem=num%10;
            num=num/10;
            ans=ans+rem;
        }
            num=ans;
        }
        return num;
    }
};


/*
Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.

Example 2:
Input: num = 0
Output: 0
*/