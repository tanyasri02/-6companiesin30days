int maxProfit(int K, int N, int A[]) {
        // code here
        int dp[K+1][N];
        memset(dp,0,sizeof(dp));
        int mx=INT_MIN;
        
        for(int i=1;i<=K;i++)
        {
            mx = INT_MIN;
            for(int j=1;j<N;j++)
            {
                mx = max(dp[i-1][j-1]-A[j-1],mx);
                dp[i][j] = max(dp[i][j-1],mx+A[j]);
            }
        }
        return dp[K][N-1];
    }