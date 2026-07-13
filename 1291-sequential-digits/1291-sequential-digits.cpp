class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string num="123456789";
        vector<int> res;
        for(int i=2;i<10;i++)
        {
            for(int j=0;j<=num.length()-i;j++)
            {
                int ans=stoi(num.substr(j,i));
                if(ans>=low && ans<=high)
                {
                    res.push_back(ans);
                }
            }
        }
        return res;
    }
};