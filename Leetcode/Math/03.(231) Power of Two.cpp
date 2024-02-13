class Solution {
public:
    bool isPowerOfTwo(int n) {
        int rem=0;

        if(n<=0)
        return false;

        while(n!=1){
            rem=n%2;
            if(rem==1)
            {
                //cout<<"";
                return false;
            }
            n=n/2;
        }
        // At this point, x is 1, indicating x is a power of two
        return true;
    }
};