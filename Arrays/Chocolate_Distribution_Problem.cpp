// https://www.geeksforgeeks.org/chocolate-distribution-problem/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    long long mini=INT_MAX;
    long long currDiff=0;
    sort(a.begin(),a.end());
    
    for(int i=0;i<=a.size()-m;i++){
        currDiff=(a[i+m-1]-a[i]);
        mini=min(currDiff,mini);
    }
    return mini;
    }   
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends
