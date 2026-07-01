class Solution {
public:
    int numberOfSubstrings(string s) {
        int arr[3]={-1,-1,-1};
        int total=0;
        for(int i=0;i<s.size();i++)
        {
            arr[s[i]-'a']=i;
            total+=min({arr[0],arr[1],arr[2]})+1;
        }
        return total;
    }
};