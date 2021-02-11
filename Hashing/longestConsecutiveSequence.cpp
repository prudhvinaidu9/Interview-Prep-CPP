#include<bits/stdc++.h>
using namespace std;

int lcs(vector<int> &v)
{
    set<int> s;
    for(int i=0;i<v.size();i++)
    {
        s.insert(v[i]);
    }
    int longeststreak=0;
    for(int i=0;i<v.size();i++)
    {
        if(!s.count(v[i]-1))
        {
            int presentnum=v[i];
            int streak=1;
            while(s.count(presentnum+1))
            {
                presentnum+=1;
                streak+=1;
            }
            longeststreak=max(longeststreak,streak);
        }
    }
    return longeststreak;
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
    cout<<lcs(v)<<endl;
    return 0;    
}