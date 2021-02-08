#include<bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int> &v,int target)
{
    vector<int> ans;
    map<int,int>mpp;
    for(int i=0;i<v.size();i++)
    {
        if(mpp.find(target-v[i])!=mpp.end())
        {
            ans.push_back(mpp[target-v[i]]);
            ans.push_back(i);
            return ans;
        }
        else{
            mpp[v[i]]=i;
        }
    }
    ans.push_back(-1);
    ans.push_back(-1);
    return ans;
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
    int target;
    cin>>target;
    vector<int> ans=twosum(v,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}