#include<bits/stdc++.h>
using namespace std;

vector<int> nextpermutation(vector<int>v)
{
    int ind1,ind2;
    for(ind1=v.size()-2;ind1>=0;ind1--)
    {
        if(v[ind1]<v[ind1+1])
        {
            break;
        }
    }
    if(ind1<0)
    {
        reverse(v.begin(),v.end());
    }
    else{
        for(ind2=v.size()-1;ind2>ind1;ind2--)
        {
            if(v[ind1]<v[ind2])
            {
                break;
            }
        }
        swap(v[ind1],v[ind2]);
        reverse(v.begin()+ind1+1,v.end());
    }
    return v;
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
    vector<int> ans= nextpermutation(v);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}


