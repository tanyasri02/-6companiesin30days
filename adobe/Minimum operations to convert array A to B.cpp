#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  int lengthOfLIS(vector<int>& v) {
     if (v.size() == 0) // boundary case
        return 0;

    vector<int> tail(v.size(), 0);
    int length = 1; 

    tail[0] = v[0];

    for (int i = 1; i < v.size(); i++) {

    
        auto b = tail.begin(), e = tail.begin() + length;
        auto it = lower_bound(b, e, v[i]);

        if (it == tail.begin() + length)
            tail[length++] = v[i];
        else
            *it = v[i];
    }

    return length;
    }
    int minInsAndDel(int A[], int B[], int N, int M) {
        // code here
        vector<int>arr;
        map<int,int>mp;
        
        for(int i=0;i<M;i++)
        mp[B[i]]++;
        
        for(int i=0;i<N;i++)
        {
            if(mp[A[i]]>0)
            arr.push_back(A[i]);
        }
        
        int len = lengthOfLIS(arr);
        int ans = (N-len)+(M-len);
        //int ans = (abs(len-a.length())+abs(len-b.length()));
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M;
        cin>>N>>M;
        
        int A[N], B[M];
        for(int i=0; i<N; i++)
            cin>>A[i];
        for(int i=0; i<M; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.minInsAndDel(A,B,N,M) << endl;
    }
    return 0;
}  // } Driver Code Ends
//simply use lis but dp wala nhi chalega O(NlogN) me karna padhega
