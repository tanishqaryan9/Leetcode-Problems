class Solution {
public:
    int findGCD(int a, int b)
    {
        if(b==0)
        {
            return a;
        }
        return findGCD(b,a%b);
    }

    bool isGoodArray(vector<int>& nums) {
        int gcd=nums[0];
        for(int num: nums)
        {
            gcd=findGCD(gcd,num);
            if(gcd==1) return true;
        }
        return false;
    }
};