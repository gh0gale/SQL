class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int t1=0,t2=1;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                ans[t1]=nums[i];
                t1 = t1 + 2;
            }
            else{
                ans[t2] = nums[i];
                t2 = t2 + 2;
            }
        }
        for(int i=0;i<n;i++){
            nums[i]=ans[i];
        }
        return nums;

    }
};