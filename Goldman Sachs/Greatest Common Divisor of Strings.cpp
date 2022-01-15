class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string ans1 = str1+str2;
        string ans2 = str2+str1;
        
        if(ans1 != ans2)
            return "";
        int n = __gcd(str1.length(),str2.length());
        
        string ans="";
        for(int i=0;i<n;i++)
        {
            ans+=ans1[i];
        }
        return ans;
    }
};