#include <bits/stdc++.h> 
using namespace std; 

void sortcolors(vector<int> &v)
{
	int low=0,mid=0,high=v.size()-1;
	while(mid<=high)
	{
		if(v[mid]==0)
		{
			swap(v[low++],v[mid++]);
		}
		else if(v[mid]==1)
		{
			mid++;
		}
		else{
			swap(v[mid],v[high--]);
		}
	}
}


int main() 
{ 
	#ifndef ONLINE_JUDGE
	freopen("input1.txt","r",stdin);
	freopen("output1.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int k;
		cin>>k;
		v.push_back(k);
	}
	sortcolors(v);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	return 0; 
} 

