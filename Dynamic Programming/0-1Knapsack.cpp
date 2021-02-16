#include<bits/stdc++.h>
using namespace std;

int knapsack(int ind,int w,vector<int> weights,vector<int> values,int n,vector<vector<int> > &dp)
{
    if(ind==n) return 0;
    if(dp[ind][w]!=-1) return dp[ind][w];
    int val=INT_MIN;
    if(weights[ind]<=w)
    {
        val=values[ind]+knapsack(ind+1,w-weights[ind],weights,values,n,dp);
    }
    val=max(val,knapsack(ind+1,w,weights,values,n,dp));
    return dp[ind][w]=val;
}

int main()
{
    int n;
    cin>>n;
    vector<int> values,weights;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        values.push_back(k);
    }
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        weights.push_back(k);
    }
    int w;
    cin>>w;
    vector<vector<int> > dp(n, vector<int> (w+1,-1));
    cout<<knapsack(0,w,weights,values,n,dp);
    return 0;
}