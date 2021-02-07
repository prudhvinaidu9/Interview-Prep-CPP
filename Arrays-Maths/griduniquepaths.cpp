#include<bits/stdc++.h>
using namespace std;
int uniquepaths(int i,int j,int m,int n,vector<vector<int> > &dp)
{
    if((i==m-1) || (j==n-1)) return 1;
    if(i>=m-1 || j>=n-1) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    else return dp[i][j]=uniquepaths(i+1,j,m,n,dp)+uniquepaths(i,j+1,m,n,dp);
}
int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int> >dp(m,vector<int>(n,-1));
    int ans=uniquepaths(0,0,m,n,dp);
    cout<<ans;
    return 0;
}