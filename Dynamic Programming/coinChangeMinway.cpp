#include<bits/stdc++.h>
using namespace std;

long int coinChangeways(int ind,vector<int> &v,int sum,vector<vector<long int> > &dp)
{
    if(ind==v.size())
    {
        if(sum==0) return 0;
        else return INT_MAX;
    }
    if(dp[ind][sum]!=-1) return dp[ind][sum];
    if(v[ind]<=sum){
        dp[ind][sum]=min(1+coinChangeways(ind,v,sum-v[ind],dp),coinChangeways(ind+1,v,sum,dp));
    }
    else dp[ind][sum]=coinChangeways(ind+1,v,sum,dp);
    return dp[ind][sum];
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
    vector<vector<long int> >dp(n+1,vector<long int> (sum+1,-1));
    long int ans=coinChangeways(0,v,sum,dp);
    if(ans==INT_MAX) cout<<"-1";
    else cout<<ans;
    return 0;
}