class Solution {
public:
    bool ispossible(vector<int> nums , int n , int sum)
    {
        bool t[nums.size()+1][sum+1];

    for(int i = 0; i < nums.size()+1; i++){
        for(int j = 0; j < sum + 1; j++){
            if(i == 0){
                t[i][j] = false;
            }
            
            if(j == 0){
                t[i][j] = true;
            }
        }
    }
    
    for(int i = 1; i < nums.size()+1; i++){
        for(int j = 1; j < sum+1; j++){
            if(nums[i-1] <= j){
                t[i][j] = t[i-1][j-nums[i-1]] || t[i-1][j];
            }else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    
    return t[nums.size()][sum];
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        
        if(sum%2==1)
            return false;
        
        return ispossible(nums,n,sum/2);
    }
};