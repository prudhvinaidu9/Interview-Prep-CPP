#include<bits/stdc++.h>
using namespace std;

int maxprodsubarr(vector<int> &v)
{
    int pp=1,np=1,maxi=INT_MIN,c=1;
    bool hp=false,hz=false;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>0)
        {
            hp=true;
            pp*=v[i];
            if(np!=1) np*=v[i];
        }
        else if(v[i]<0)
        {
            int temp=pp;
            pp=max(1,np*v[i]);
            np=temp*v[i];
            if(i>0 && v[i]==v[i-1]) c++;
            else c=1;
        }
        else{
            pp=np=1;
            hz=true;
        }
        maxi=max(maxi,pp);
    }
    if(maxi==1)
    {
        if(hp) return maxi;
        if(hz && c==1) return 0;
    }
    return maxi;
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
    int ans=maxprodsubarr(v);
    cout<<ans<<endl;
    return 0;
}