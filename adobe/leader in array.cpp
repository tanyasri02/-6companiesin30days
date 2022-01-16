using namespace std;
#define ll long long int
#define test() int t; cin>>t; while(t--)

int main() 
{
	test()
	{
	    ll n;
	    cin>>n;
	    ll arr[n];
	    for(ll i=0;i<n;i++)
	        cin >> arr[i];
	    stack<ll> s;
	    s.push(arr[n-1]);
	    for(ll i=n-2;i>=0;i--)
	    {
	        if(arr[i]>=s.top())
	            s.push(arr[i]);
	    }
	    while(!s.empty())
	    {
	        cout << s.top() << " ";
	        s.pop();
	    }
	    cout << endl;
	}
	return 0;
}