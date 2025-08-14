class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int index = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            index = index ^ nums[i];
        }
        return index;
    }
};