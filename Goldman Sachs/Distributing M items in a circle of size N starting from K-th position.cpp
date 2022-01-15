#include<bits/stdc++.h>
using namespace std;
#define fi() ios_base::sync_with_stdio;cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define test() int t; cin>>t; while(t--)
int main()
{
    fi()
    test()
    {
        int n,k,m;
        cin>>n>>m>>k;
        
        int i=k;
        int count=0;
        
        while(true)
        {
            
            if(i>n)
            i=i%n;
            
            i++;
            count++;
            
            if(m == count)
            {
                cout<<i-1<<endl;
                break;
            }
        }
    }
    return 0;
}
