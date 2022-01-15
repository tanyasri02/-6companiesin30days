class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        int n=nums.size();
        
        int len=INT_MAX,ws=0,sum=0;
        
        for(int we=0;we<n;we++)
        {
            sum+=nums[we];
            
            while(sum>=k)
            {
                len=min(len,we-ws+1);
                sum-=nums[ws];
                ws++;
            }
            
        }
        return (len==INT_MAX?0:len);
    }
};Minimum Size Subarray Sum