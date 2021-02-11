#include<bits/stdc++.h>
using namespace std;

int lonsubarrzero(vector<int> &v)
{
    int n=v.size();
    unordered_map<int,int> mpp;
    int maxlen=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        if(sum==0)
        {
            maxlen=i+1;
        }
        else{
            if(mpp.find(sum)!=mpp.end())
            {
                maxlen=max(maxlen,i-mpp[sum]);
            }
            else{
                mpp[sum]=i;
            }
        }
    }
    return maxlen;
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
    cout<<lonsubarrzero(v)<<endl;
    return 0;
}