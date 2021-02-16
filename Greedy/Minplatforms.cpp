#include<bits/stdc++.h>
using namespace std;

int minplatforms(vector<int> a,vector<int> b)
{
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=1,j=0;
    int maxiplat=1;
    int platforms=1;
    while(i<a.size() && j<b.size())
    {
        if(a[i]<=b[j])
        {
            platforms++;
            i++;
        }
        else{
            platforms--;
            j++;
        }
        maxiplat=max(maxiplat,platforms);
    }
    return maxiplat;
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
    cout<<minplatforms(a,b);
    return 0;
}