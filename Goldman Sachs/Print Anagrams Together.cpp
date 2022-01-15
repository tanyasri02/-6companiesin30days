class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& str) {
        //code here
        map<string,vector<string>>mp;
        vector<vector<string>>ans;
        
        int n = str.size();
        
        for(int i=0;i<n;i++)
        {
            string temp = str[i];
            sort(temp.begin(),temp.end());
            
            mp[temp].push_back(str[i]);
        }
        
        for(auto x:mp)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};

//use map 
//each word(o(nlog n)) and 
//then put them in a map where the sorted word is header and second word is vector of anagram string 0(n*nlog n)
