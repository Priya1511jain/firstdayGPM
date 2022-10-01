class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0 && nums[i]==nums[i-1])
            {
                continue;
            }
            int first=nums[i];
            int start=i+1;
            int end=nums.size()-1;
            
            while (start <end)
            {
                if(nums[start]+nums[end]==-first)
                {
                    vector<int>ans;
                    ans.push_back(first);
                    ans.push_back(nums[start]);
                    ans.push_back(nums[end]);
                    
                    result.push_back(ans);
                    
                    start++;
                    end--;
                    
                    //to remove duplicates 
                    while(start<end && nums[start]==nums[start-1])
                    {
                        start++;
                    }
                }
                    else if(nums[start]+nums[end]<-first)
                    {
                        start++;
                    }
                    else
                    {
                        end--;
                    }
             }
        }
        return result;
    }
};
