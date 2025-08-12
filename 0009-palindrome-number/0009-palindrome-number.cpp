class Solution {
public:
    bool isPalindrome(int x) {
        int rem;
        long ans;
        int x1 = x;
        while(x!=0)
        {
        if(x>0)
        {
            rem = x%10;
            ans = ans*10 + rem;
            x=x/10;
            if(ans > INT_MAX || ans < INT_MIN)
                return 0;
        }
        else
         return false;
        }
        return ans==x1;
    }
};