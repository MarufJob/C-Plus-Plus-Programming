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
