class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> store;
        for(int k=0;k<nums.size();k++)
        {
            if(k>0 && nums[k]==nums[k-1]) continue;
            for(int l=k+1;l<nums.size()-1;l++)
            {
                if(l>k+1 && nums[l]==nums[l-1]) continue;
                int i=l+1,j=nums.size()-1;
                while(i<j)
                {
                    vector<int> res;
                        long long sum = 1LL*nums[k] + nums[l] + nums[i] + nums[j];
                        if(sum < target)
                        {
                            i++;
                        }
                        else if(sum > target)
                        {
                            j--;
                        }
                        else
                        {
                            res.push_back(nums[k]);
                            res.push_back(nums[l]);
                            res.push_back(nums[i]);
                            res.push_back(nums[j]);
                            store.push_back(res);
                            i++;
                            j--;
                            while (i<j && nums[i]==nums[i-1]) i++;
                            while (i<j && nums[j]==nums[j+1]) j--;
                        }
                }
            }
            
        }
        return store;
    }
};