#include<bits/stdc++.h>
using namespace std;

int subsetSum(int ind,vector<int> &v,int sum,vector<vector<int> >&dp)
{
    if(sum==0) return 1;
    if(ind==v.size()) return 0;
    if(dp[ind][sum]!=-1) return dp[ind][sum];
    if(sum<v[ind])
    {
        return dp[ind][sum]=subsetSum(ind+1,v,sum,dp);
    }
    return dp[ind][sum]=subsetSum(ind+1,v,sum-v[ind],dp) || subsetSum(ind+1,v,sum,dp); 
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
    int ans=subsetSum(0,v,sum,dp);
    if(ans==1) cout<<"True";
    else cout<<"False";
    return 0;
}