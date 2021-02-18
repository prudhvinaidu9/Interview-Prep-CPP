#include<bits/stdc++.h>
using namespace std;

int coinChangeways(int ind,vector<int> &v,int sum,vector<vector<int> > &dp)
{
    if(ind==v.size())
    {
        if(sum==0) return 1;
        else return 0;
    }
    if(dp[ind][sum]!=-1) return dp[ind][sum];
    int left=0;
    int right=0;
    if(v[ind]<=sum){
        left=coinChangeways(ind,v,sum-v[ind],dp);
    }
    right=coinChangeways(ind+1,v,sum,dp);
    return dp[ind][sum]=left+right;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        v.push_back(k);
    }
    int sum;
    cin>>sum;
    vector<vector<int> >dp(n+1,vector<int> (sum+1,-1));
    cout<<coinChangeways(0,v,sum,dp);
    return 0;
}