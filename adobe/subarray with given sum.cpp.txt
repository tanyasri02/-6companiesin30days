vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector<int>ans;
        int we=0,ws=0;
        long long int sum=0;
        int in1=0,in2=0;
        for(we=0;we<n;we++)
        {
            sum+=arr[we];
            
            while(sum>s)
            {
                sum-=arr[ws++];
                
            }
            if(sum==s)
            {
               ans.push_back(ws+1);
               ans.push_back(we+1);
               break;
            }
            //cout<<sum<<" ";
        }
        
        if(ans.size()!=2)
        ans.push_back(-1);
        return ans;
    }
//simply use sliding window