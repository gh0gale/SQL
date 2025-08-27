class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int m_index=m-1,n_index=n-1,last=m+n-1;

        while(n_index>=0)
        {
            if(m_index>=0 && nums1[m_index]>nums2[n_index])
            {
                nums1[last] = nums1[m_index];
                m_index--;
            }
            else
            {
                nums1[last] = nums2[n_index];
                n_index--;
            }
            last--;
        }
    }
};