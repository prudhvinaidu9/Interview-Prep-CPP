#include<bits/stdc++.h>
using namespace std;
int longestlen(vector<int> &v)
{
    if(v.size()<=1) return v.size();
    vector<int> temp;
    temp.push_back(v[0]);
    for(int i=1;i<v.size();i++)
    {
        if(v[i]>temp[temp.size()-1])
        {
            temp.push_back(v[i]);
        }
        else{
            int c= lower_bound(temp.begin(),temp.end(),v[i])-temp.begin();
            temp[c]=v[i];
        }
    }
    return temp.size();
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
    int ans=longestlen(v);
    cout<<ans;
    return 0;
}