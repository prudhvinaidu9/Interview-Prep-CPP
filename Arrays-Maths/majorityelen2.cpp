#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& v) {
    int p=v[0];
    int count=1,i=1;
    while(i<v.size())
    {
        if(v[i]==p)
        {
            count++;
        }
        else if(count==0)
        {
            p=v[i];
            count=1;
        }
        else count--;
        i++;
    }
    count=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==p)
        {
            count++;
        }
    }
    if(count>v.size()/2)
    {
        return p;
    }
    return p;
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
    cout<<majorityElement(v);
    return 0;
}