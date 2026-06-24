class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> mp;
        for(auto i: s)
        {
            mp[i]++;
        }
        int vow=0;
        int cons=0;
        for(auto i: mp)
        {
            if(i.first=='a' || i.first=='e' || i.first=='i' || i.first=='o' || i.first=='u')
            {
                if(i.second>vow) vow=i.second;
            }
            else
            {
                if(i.second>cons) cons=i.second;
            }
        }
        return vow+cons;
    }
};