class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long int ws=0,we=0,ans=0,prod=1;
        
        for(we=0;we<n;we++)
        {
            prod *= a[we];
            
            while(ws<n && prod >= k)
            {
                prod /= a[ws++];
            }
            
            if(prod < k)
            ans += we-ws+1;
        }
        
        return ans;
    }
};
//simple use sliding window