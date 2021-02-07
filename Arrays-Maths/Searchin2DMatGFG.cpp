#include<bits/stdc++.h>
using namespace std;

vector<int> search2D(vector<vector<int> >&v,int n,int search)
{
    vector<int> dum;
    if(v.size()==0) return dum;
    if(v[0][0]>search || v[n-1][n-1]<search) return dum;
    int i=0;
    int j=n-1;
    vector<int> ans;
    while(i<n && j>=0)
    {
        if(v[i][j]==search)
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        else if(v[i][j]>search)
        {
            j--;
        }
        else{
            i++;
        }
    }
    return dum;
}

int main()
{
    int n;
    cin>>n;
    vector<vector<int> >v;
    for(int i=0;i<n;i++)
    {
        vector<int>dum;
        for(int j=0;j<n;j++)
        {
            int k;
            cin>>k;
            dum.push_back(k);
        }
        v.push_back(dum);
    }
    int search;
    cin>>search;
    vector<int> ans = search2D(v,n,search);
    if(ans.size()) cout<<ans[0]<<" "<<ans[1];
    else cout<<"Element Not Found!";
    return 0;
}