#include<bits/stdc++.h>
using namespace std;

int msis(vector<int> &v)
{
    int n=v.size();
    vector<int> dp;
    dp.push_back(v[0]);                 
    for(int i=1;i<n;i++)                
    {
        dp.push_back(v[i]);
        for(int j=0;j<i;j++)
        {
            if(v[j]<v[i])
            {
                dp[i]=max(dp[i],dp[j]+v[i]);
            }
        }
    }
    int maxi=INT_MIN;
    for(int i=0;i<dp.size();i++)
    {
        maxi=max(maxi,dp[i]);
    }
    return maxi;
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
    cout<<msis(v);
    return 0;
}