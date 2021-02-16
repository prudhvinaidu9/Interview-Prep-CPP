#include<bits/stdc++.h>
using namespace std;

int mineditdist(string &s1,string &s2,int m,int n,vector<vector<int> > &dp)
{
    if(m==0) return n;
    if(n==0) return m;
    if(dp[m-1][n-1]!=-1) return dp[m-1][n-1];
    else if(s1[m-1]==s2[n-1]) return dp[m-1][n-1]=mineditdist(s1,s2,m-1,n-1,dp);
    else return dp[m-1][n-1]= 1+min(mineditdist(s1,s2,m,n-1,dp),//insert
                                 min(mineditdist(s1,s2,m-1,n,dp),//delete
                                 mineditdist(s1,s2,m-1,n-1,dp)));//replace
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int m=s1.size(),n=s2.size();
    vector<vector<int> > dp(m+1,vector<int> (n+1,-1));
    cout<<mineditdist(s1,s2,m,n,dp);
    return 0;
}