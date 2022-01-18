 #include <bits/stdc++.h>
using namespace std;

int atoi(string str);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<atoi(s)<<endl;
	}
}// } Driver Code Ends


/*You are required to complete this method */
int atoi(string str)
{
    //Your code here
    int x = 0;
    int flag=0;
    for(int i = 0;i<str.length();i++)
    {
        if(isdigit(str[i]))
            x=(x*10)+(str[i]-'0');
        else if(str[i]=='-')
            flag=1;
        else 
            return -1;    
    }
    if(flag==1)
        return -x;
    else
        return x;

} 
