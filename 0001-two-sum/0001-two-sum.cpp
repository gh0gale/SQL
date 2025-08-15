class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int>mpp;
        int n = nums.size();
        int bal=0;
        for(int i=0;i<n;i++)
        {
            bal = target - nums[i];
            if(mpp.count(bal))
            {
                return{mpp[bal],i};
            }
            mpp[nums[i]] = i;
        }
        return {};
    }
};