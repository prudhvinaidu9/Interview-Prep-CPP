#include<bits/stdc++.h>
using namespace std;

bool searchele(vector<vector<int> > &v, int ele)
{
    if(!v.size()) return false;
    int m=v.size();
    int n=v[0].size();
    int low=0;
    int high=(m*n)-1;
    while(low<=high)
    {
        int mid=(low+(high-low)/2);
        if(v[mid/n][mid%n]==ele)
        {
            return true;
        }
        else if(v[mid/n][mid%n]>ele)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return false;
}

int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int> >v;
    for(int i=0;i<m;i++)
    {
        vector<int> dum;
        for(int j=0;j<n;j++)
        {
            int k;
            cin>>k;
            dum.push_back(k);
        }
        v.push_back(dum);
    }
    int ele;
    cin>>ele;
    bool ans=searchele(v,ele);
    cout<<ans;
    return 0;
}