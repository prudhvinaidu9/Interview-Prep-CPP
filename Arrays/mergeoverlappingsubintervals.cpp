#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > merge(vector<vector<int> >& v) {
    vector<vector<int> > mergeint;
    if(v.size()==0) return mergeint;
    sort(v.begin(),v.end());
    vector<int> temp= v[0];
    for(int i=0;i<v.size();i++)
    {
        if(v[i][0]<=temp[1])
        {
            temp[1]=max(v[i][1],temp[1]);
        }
        else{
            mergeint.push_back(temp);
            temp=v[i];
        }
    }
    mergeint.push_back(temp);
    return mergeint;
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int> >v;
    for(int i=0;i<n;i++)
    {
        vector<int>dum;
        int a,b;
        cin>>a>>b;
        dum.push_back(a);
        dum.push_back(b);
        v.push_back(dum);
    }
    vector<vector<int> > ans=merge(v);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
