#include <bits/stdc++.h> 
#define ll long long int
using namespace std; 

vector<int> repeatmissing(vector<int> &v, int n)
{
	int xor1;
	int set_bit_no;
	int i;
	int x = 0;
	int y = 0;
	xor1 = v[0];
	for (i=1;i<n;i++) xor1 = xor1 ^ v[i];
	for (i=1;i<=n;i++) xor1 = xor1 ^ i;
	set_bit_no = xor1 & ~(xor1 - 1);
	for (i=0;i<n;i++) {
		if (v[i]&set_bit_no) x = x^v[i];
		else y = y^v[i];
	}
	for (i=1;i<=n;i++) {
		if (i & set_bit_no) x = x^i;
		else y = y^i;
	}
	vector<int>ans;
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(v[i]==x)
		{
			flag=1;
		}
	}
	if(flag==1) ans.push_back(x);
	else ans.push_back(y);
	if(ans[0]==x) ans.push_back(y);
	else ans.push_back(x);
	return ans;
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
	auto ans= repeatmissing(v,n);
	cout<<ans[0]<<" "<<ans[1]<<endl;
	return 0; 
} 







