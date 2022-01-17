string FirstNonRepeating(string A){
		    // Code here
		    string ans="";
     int n=A.length();
     queue<int>q;
     char c;
     unordered_map<char,int>mp;
     
     for(int i=0;i<n;++i)
     {
        mp[A[i]]++;
        if(mp[A[i]]==1)
        {
            q.push(A[i]);
        }
      
            while(!q.empty() && mp[q.front()]!=1)
            {
                if(mp[q.front()]==1)
                {
                    c=q.front();
                    break;
                }
                else{
                    q.pop();
                }
                
            }
           if (!q.empty())
           {

                  c=q.front(); 
               
           }
           else c='#';
            
       
    ans+=c;     
        
         
     }  
   return ans;  

}