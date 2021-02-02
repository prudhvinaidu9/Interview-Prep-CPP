#include <bits/stdc++.h> 
#define ll long long int
using namespace std; 

int duplicatenum(vector<int>&v)
{
	    int slow=v[0];
        int fast=v[0];
        do{
            slow=v[slow];
            fast=v[v[fast]];
        }while(slow!=fast);
        fast=v[0];
        while(slow!=fast)
        {
            slow=v[slow];
            fast=v[fast];
        }
        return slow;
}

int main() 
{ 
	// #ifndef ONLINE_JUDGE
	// freopen("input1.txt","r",stdin);
	// freopen("output1.txt","w",stdout);
	// #endif
	int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int k;
		cin>>k;
		v.push_back(k);
	}
	int duplicate = duplicatenum(v);
	cout<<duplicate<<endl; 
	return 0; 
} 




