#include<bits/stdc++.h>
using namespace std;

void rotatemat(vector<vector<int> > &v)
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            swap(v[i][j],v[j][i]);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        reverse(v[i].begin(),v[i].end());
    }
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
    rotatemat(v);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}