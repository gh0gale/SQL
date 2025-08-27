class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        map<int,int>frequencies;

        for(int num:nums)
        {
            frequencies[num]++;
        }

        for(const auto& pair: frequencies)
        {
            if(pair.second>n/3)
                ans.push_back(pair.first);
        }
        return ans;
    }
};