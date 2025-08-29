class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int left=0,right=n-1;
        int mid;

        while(left<=right)
        {
            mid=(left+right)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(target>nums[mid])
            {
                left=mid+1;
                
            }
            else
            {
                right=mid-1;
            }

        }
        return left;
    }
};