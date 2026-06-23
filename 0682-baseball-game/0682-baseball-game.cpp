class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum=0;
        stack<int> st;
        for(auto i: operations)
        {
            if(i!="C" && i!="D" && i!="+")st.push(stoi(i));
            else if(i=="C")
            {
                if(!st.empty()) st.pop();
            }
            else if(i=="D")
            {
                st.push(st.top()*2);
            }
            else if(i=="+")
            {
                if(st.size()<=1) continue;
                else
                {
                    int n1=st.top();
                    st.pop();
                    int n2=st.top();
                    st.push(n1);
                    st.push(n1+n2);
                }
            } 
        }
        while(!st.empty())
        {
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};