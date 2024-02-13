class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0)
        return false;
        int num=x, rem, ans=0;

        while(x!=0){
            rem=x%10;
            x=x/10;
            //for integer overflow
            if(ans>INT_MAX/10)
            return false;

            ans=ans*10+rem;
        }
            if(ans==num){
                return true;
            }

        return false;
        
    }
};

/*
Example 1:
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:
-231 <= x <= 231 - 1
 

Follow up: Could you solve it without converting the integer to a string?
*/
