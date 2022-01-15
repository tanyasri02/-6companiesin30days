string printMinNumberForPattern(string S){
        // code here 
        string ans;
        stack<int>st;
        
        int num=1;
        for(auto x:S)
        {
            st.push(num++);
            if(x=='I')
            {
                while(!st.empty())
                {
                    ans += to_string(st.top());
                    st.pop();
                }
            }
        }
        
        st.push(num);
        
        while(!st.empty())
        {
            ans += to_string(st.top());
            st.pop();
        }
        return ans;
    }