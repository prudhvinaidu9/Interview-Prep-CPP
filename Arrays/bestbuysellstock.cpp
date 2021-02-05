#include<bits/stdc++.h>
using namespace std;

int buysell(vector<int>&v)
{
    int minprice=INT_MAX;
    int maxprofit=0;
    for(int i=0;i<v.size();i++)
    {
        minprice=min(minprice,v[i]);
        maxprofit=max(maxprofit,v[i]-minprice);
    }
    return maxprofit;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        v.push_back(k);
    }
    int pro=buysell(v);
    cout<<pro;
    return 0;
}