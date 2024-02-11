class Solution {
public:
    int reverse(int x) {
        int num=0, rem;

        while(x!=0){
            rem=x%10;
            x=x/10;

            if(num>INT_MAX/10 || num<INT_MIN/10 )
            return 0;

            num=num*10+rem;
        }

        return num;
        
    }
};