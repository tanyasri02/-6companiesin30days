string encode(string s)
{     
  //Your code here 
  map<char,int>mp;
  string ans="";
  
  int n = s.length(),j;
  
  for(int i=0;i<n;)
  {
      int count = 0;
      for(j=i;j<n;j++)
      {
          if(s[i] != s[j])
          break;
          count++;
      }
      
      ans += s[i]+to_string(count);
      i=j;
  }
  return ans;
}     
 