#include <bits/stdc++.h>
using namespace std;

int kadane(vector<int>nums,int n)
{
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            maxi=max(maxi,sum);
            if(sum<0) sum=0;
        }
        return maxi;
}

int main() {
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        v.push_back(k);
    }
    int sum=kadane(v,n);
    cout<<sum;
    return 0;
}