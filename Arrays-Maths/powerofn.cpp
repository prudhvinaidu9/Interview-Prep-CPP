#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    long long nn=n;
    if(nn<0) nn=-1*nn;
    double ans=1.0;
    while(nn)
    {
        if(nn%2)
        {
            ans=ans*x;
            nn-=1;
        }
        else{
            nn/=2;
            x*=x;
        }
    }
    if(n<0) ans=(double)1/(double)ans;
    cout<<ans;
    return 0;
}