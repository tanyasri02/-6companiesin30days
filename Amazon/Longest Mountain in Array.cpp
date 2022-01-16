class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int ans = 0, upLength = 0, downLength = 0;
		
        for(int i = 1; i < arr.size(); i++)
        {
            if(arr[i - 1] == arr[i] || downLength && arr[i - 1] < arr[i])
                upLength = downLength = 0;
            
            upLength += arr[i - 1] < arr[i];
            downLength += arr[i - 1] > arr[i];

            if(upLength && downLength)
                ans = max(ans, upLength + downLength + 1);
        }
        return ans;
    }
};