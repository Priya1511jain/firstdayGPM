class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1;
        for(int j=0 ;j<nums.size();j++)
        {
            if(nums[i]!=nums[j])
            {
                 nums[i]=nums[j];
                i++;
            }
        }
        return i;
    }
};
