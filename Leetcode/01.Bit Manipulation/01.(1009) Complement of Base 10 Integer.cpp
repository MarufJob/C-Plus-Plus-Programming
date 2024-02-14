class Solution {
public:
    int bitwiseComplement(int n) {
        
        if(n==0)
        return 1;

        int rem,ans=0,mul=1;
    while(n>0)
    {
        rem=n%2;  
        rem=rem^1;
        n=n/2;  
        ans=rem*mul+ans;   
        mul=mul*2;     
    }
    return ans;  
    }
};

/*
Example 1:
Input: n = 5
Output: 2
Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.

Example 2:
Input: n = 7
Output: 0
Explanation: 7 is "111" in binary, with complement "000" in binary, which is 0 in base-10.

Example 3:
Input: n = 10
Output: 5
Explanation: 10 is "1010" in binary, with complement "0101" in binary, which is 5 in base-10.
 
Constraints:
0 <= n < 109
*/
