#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &v)
{
    int ele1=v[0];
    int cnt1=1;
    int ele2=-1,cnt2=0,i=1;
    while(i<v.size())
    {
        if(v[i]==ele1) cnt1++;
        else if(v[i]==ele2) cnt2++;
        else if(cnt1==0){
            cnt1=1;
            ele1=v[i];
        }
        else if(cnt2==0){
            cnt2=1;
            ele2=v[i];
        }
        else{
            cnt1--;
            cnt2--;
        }
        i++;
    }
    cnt1=cnt2=0;
    for(int i=0;i<v.size();i++)
    {
        if(ele1==v[i]) cnt1+=1;
        else if(ele2==v[i]) cnt2+=1;
    }
    vector<int>ans;
    if(cnt1>v.size()/3) ans.push_back(ele1);
    if(cnt2>v.size()/3) ans.push_back(ele2);
    return ans;

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
    vector<int> ans=majorityElement(v);
    if(ans.size()>1) cout<<ans[0]<<ans[1]<<endl;
    else cout<<ans[0];
    return 0;
}