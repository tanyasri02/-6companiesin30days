//priority wise karke slidinb window use karlo
pair<int,int> findSmallestRange(int KSortedArray[][N], int n, int k){
vector<pair<int,int>> arr;
         
         for(int i =  0 ; i < k ; i ++)
         {
             for(int   j  = 0 ; j < n ; j ++)
             {
                 arr.push_back({KSortedArray[i][j] , i});
             }
         }
         
         sort(arr.begin() , arr.end());
         
        
         
         int count = k;
      
       
       unordered_map<int,int> m;
       
       
         int  i = 0 , j = 0 , size = arr.size();
         
         int min = INT_MAX;
         pair<int,int> ans;
         
         while( j < size)
         {
             pair<int,int> temp = arr[j];
             int val = temp.first;
             int id = temp.second;
             
             m[id]++;
             
             if(m.size() < count) j++;
             
             else if(m.size() == count)
             {
                 while(m.size() == count)
                 {
                     if(arr[j].first - arr[i].first + 1 < min)
                     {
                         min = arr[j].first - arr[i].first +1;
                         ans = {arr[i].first , arr[j].first };
                     }
                     
                     
                     m[arr[i].second]--;
                     
                     if(m[arr[i].second] == 0)
                     {
                         m.erase(arr[i].second);
                     }
                     
                     i++;
                     
                 }
                 j++;
             }
                   
         }
         
         return ans;
}