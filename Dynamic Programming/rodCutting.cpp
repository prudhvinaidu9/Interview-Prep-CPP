#include <bits/stdc++.h>
using namespace std;
int rc(int n ,vector<int> &x,int dp[])
{
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    int maxi=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        int cost=x[i-1]+rc(n-i,x,dp);
        maxi=max(cost,maxi);
    }
    dp[n]=maxi;
    return maxi;
}

int main() {
	int t;
	cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>x;
        int a;
        for(int j=0;j<n;j++)
        {
            cin>>a;
            x.push_back(a);
        }
        int dp[n+1];
        memset(dp,-1, sizeof dp);
        cout<<rc(n,x,dp)<<endl;
    }
	return 0;
}
