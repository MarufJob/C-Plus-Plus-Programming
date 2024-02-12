class Solution {
public:
    bool isHappy(int n) {
        int rem, ans;
        while(ans!=1){
            ans=0; // Reset ans before each iteration of the inner loop
            while(n!=0){
                rem=n%10;
                n=n/10;
                ans=ans+rem*rem;

            }
            if(ans<=9)
            {
                if(ans==1 || ans==7)
                return true;

                else
                return false;
            }
            // Update the value of n for the next iteration
            n = ans;
            
        }
        return true;
    }
};


/*
Example 1:

Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1

Example 2:
Input: n = 2
Output: false
*/


/*
Logic behing my code:

Single digit numbers apart from 1 and 7, are not happy numbers.
So if n==1 or n==7 then directly return true.
Otherwise, run the loop until n>9, i.e. when the number of digits are greater than 1.
Inside this main loop, access individual digits of the number(n) and perform the square operation followed by sum.
This sum if equals to either 1 or 7, then we can return true. Else continue the loop, untill the sum becomes a single digit number.
Lastly, if 1 or 7 doesnot appear, then return false.
Try to code it. Cheers!!!


It can be proved that if n is not a happy number,
It will finally goto a
4→16→37→58→89→145→42→20→4 loop.
so just consider if go to one of these number, it will be not happy number, otherwise, it will finally stop at 1
The Hint is that for n > 100, the next number will less than n


Can anyone explain how '1111111' is a happy number?
So far i understood if the number ends in 1 then it will be a happy number but here
1^2+1^2+1^2+1^2+1^2+1^2+1^2 = 7 which ends in 7.Then how it could be a happy number?
*/