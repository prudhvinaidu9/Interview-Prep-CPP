#include<bits/stdc++.h>
using namespace std;

int longsubseq(string &s1,string &s2,int m,int n,vector<vector<int> > &dp)
{
    if(m==0 || n==0) return 0;
    if(dp[m-1][n-1]!=-1) return dp[m-1][n-1];
    if(s1[m-1]==s2[n-1]) return dp[m-1][n-1] = 1 + longsubseq(s1,s2,m-1,n-1,dp);
    else return dp[m-1][n-1] = max(longsubseq(s1,s2,m-1,n,dp),longsubseq(s1,s2,m,n-1,dp));
}

int main(){
    string s1;
    string s2;
    cin>>s1>>s2;
    int m=s1.size();
    int n=s2.size();
    vector<vector<int> >dp(m+1,vector<int> (n+1,-1));
    cout<<longsubseq(s1,s2,m,n,dp);
    return 0;
}