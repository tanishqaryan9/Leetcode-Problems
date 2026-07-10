class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> store;
        for(int k=0;k<nums.size();k++)
        {
            if(k>0 && nums[k]==nums[k-1]) continue;
            int i=k+1,j=nums.size()-1;
            while(i<j)
            {
                vector<int> res;
                if(i!=j && i!=k && j!=k)
                {
                    if(nums[k]+nums[i]+nums[j] < 0)
                    {
                        i++;
                    }
                    else if(nums[k]+nums[i]+nums[j] > 0)
                    {
                        j--;
                    }
                    else
                    {
                        res.push_back(nums[k]);
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