class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int temp,j = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(nums[i]!=0){
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp; 
                j++;

            }
        }
    }
};