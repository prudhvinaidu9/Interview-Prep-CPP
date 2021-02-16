#include<bits/stdc++.h>
using namespace std;

int nmeetings(vector<int> a,vector<int> b)
{
    vector<vector<int> >pairs;
    for(int i=0;i<a.size();i++)
    {
        vector<int> dum;
        dum.push_back(b[i]);
        dum.push_back(a[i]);
        pairs.push_back(dum);
    }
    sort(pairs.begin(),pairs.end());
    int m=pairs[0][0];
    int meets=1;
    for(int i=1;i<pairs.size();i++)
    {
        if(m<pairs[i][1])
        {
            meets++;
            m=pairs[i][0];
        }
    }
    return meets;
}

int main()
{
    int n;
    cin>>n;
    vector<int> a,b;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        a.push_back(k);
    }
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        b.push_back(k);
    }
    int ans=nmeetings(a,b);
    cout<<ans;
    return 0;
}