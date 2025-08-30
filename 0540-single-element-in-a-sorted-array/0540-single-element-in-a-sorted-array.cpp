class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = (nums.size()) - 1;
        for (int i = 0; i < n; i += 2) {
            if (nums[i] != nums[i + 1]) {
                return nums[i];
            }
        }
        return nums.back();       
    }
};