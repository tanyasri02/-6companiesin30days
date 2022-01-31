class Solution{
    public:
    //You need to complete this fucntion
    
    
    long long power(long long int x,long long int y)
    {
        
       long long result = 1;
    while (y > 0) {
    	if (y % 2 == 0){
        	x = (x%mod * x%mod)%mod;
           	y = y / 2;
        }
       	else{
   			result = (result%mod * x%mod)%mod;
       		y = y - 1;
       	}
 	}
 	return result%mod;
    }

};