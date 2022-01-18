class Solution{
    public:
    string amendSentence (string s)
    {
        // your code here
        string ans="";
        int n=s.length();
        
        ans+=tolower(s[0]);
        
        for(int i=1;i<n;i++)
        {
            if(isupper(s[i]))
            {
                ans+=" ";
                ans+=tolower(s[i]);
                continue;
            }
            else
            {
                ans+=tolower(s[i]);
            }
        }
        return ans;
    }
};