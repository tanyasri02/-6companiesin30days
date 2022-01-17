class Solution{
    public:
    vector<vector<long long int>>dp;
    long long int ut(int n,int x,int curr)
    {
        if(n==0)
        return 1;
        else if(curr==0)
        return 0;
        long long int &ans=dp[n][curr];
        if(ans!=-1)
        return ans;
        
        long long int power = pow(curr,x);
        return ans=(n-power>=0?ut(n-power,x,curr-1):0)+ut(n,x,curr-1);
        
    }
    long long int numOfWays(int n, int x)
    {
        // code here
        int num = pow(n,1.0/x);
        dp.resize(n+1,vector<long long int>(num+1,-1));
        return ut(n,x,num);
    }
};