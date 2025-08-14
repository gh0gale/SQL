class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            sum = sum + nums[i];
        }
        int n_sums = n*(n+1)/2;
        return n_sums - sum;
    }
};