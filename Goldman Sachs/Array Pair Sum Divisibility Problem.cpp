bool canPair(vector<int> nums, int k) {
  // Code here.
       vector<int>rem(k,0);
       for(auto x:nums)
       rem[x%k]++;
       
       if(rem[0]%2 != 0)
       return false;
       
       int i=1,j=k-1;
       while(i<j)
       {
           if(rem[i++] != rem[j--])
           return false;
       }
       if(i==j && rem[i]%2 == 1)
       return false;
       return true;
    }