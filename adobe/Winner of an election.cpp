vector<string> winner(string arr[],int n)
    {
        map<string,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        int mx=INT_MIN;
        string ans;
        for(auto x:mp)
        {
            if(x.second>mx)
            {
                mx=x.second;
                ans=x.first;
            }
        }
        vector<string>v(2);
        v[0] = ans;
        v[1] = to_string(mx);
        return v;
    }