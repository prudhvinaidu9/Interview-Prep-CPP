#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > foursum(vector<int> &v,int target)
{
    vector<vector<int> > ans;
    if(v.empty()) return ans;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            int rem_tar=target-v[i]-v[j];
            int front=j+1;
            int back=v.size()-1;
            while(front<back)
            {
                if(v[front]+v[back]<rem_tar){
                    front++;
                }
                else if(v[front]+v[back]>rem_tar){
                    back--;
                }
                else{
                    vector<int>fourval(4,0);
                    fourval[0]=v[i];
                    fourval[1]=v[j];
                    fourval[2]=v[front];
                    fourval[3]=v[back];
                    ans.push_back(fourval);
                    while(front<back && v[front]==fourval[2]) ++front;
                    while(front<back && v[back]==fourval[3]) back--;
                }
            }
            while(j+1<v.size() && v[j]==v[j+1]) ++j;
        }
        while(i+1<v.size() && v[i]==v[i+1]) i++;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        v.push_back(k);
    }
    int target;
    cin>>target;
    vector<vector<int> > ans=foursum(v,target);
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