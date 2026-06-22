class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int count=0;
        unordered_map<char,int> mp;
        for(auto i: text)
        {
            if(i=='b' || i=='a' || i=='l' || i=='o' || i=='n')
            {
                mp[i]+=1;
            }
        }
        while(mp['b']>0 && mp['a']>0 && mp['l']>1 && mp['o']>1 && mp['n']>0)
        {
                count++;
                mp['b']--;
                mp['a']--;
                mp['l']-=2;
                mp['o']-=2;
                mp['n']--;
        }
        return count;
    }
};