#include<bits/stdc++.h>
using namespace std;

int msputil(vector<vector<int> >&v,int i,int j,int m,int n,vector<vector<int> > &dp)
{
    if(i==m-1 && j==n-1) return v[i][j];
    if(dp[i][j]!=-1) return dp[i][j];
    int sum=INT_MIN;
    if(i+1<m && j+1<n)
    {
        int s=v[i][j]+msputil(v,i+1,j+1,m,n,dp);
        sum=max(sum,s);
    }
    if(j+1<n)
    {
        int s=v[i][j]+msputil(v,i,j+1,m,n,dp);
        sum=max(sum,s);
    }
    if(i+1<m)
    {
        int s=v[i][j]+msputil(v,i+1,j,m,n,dp);
        sum=max(sum,s);
    }
    return dp[i][j]=sum;
}

int msp(vector<vector<int> >&v,int m,int n)
{
    vector<vector<int> >dp(m,vector<int> (n,-1));
    return msputil(v,0,0,m,n,dp);
}

int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int> > v;
    for(int i=0;i<m;i++)
    {
        vector<int> dum;
        for(int j=0;j<n;j++)
        {
            int k;
            cin>>k;
            dum.push_back(k);
        }
        v.push_back(dum);
    }
    cout<<msp(v,m,n);
    return 0;
}