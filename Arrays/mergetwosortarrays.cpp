#include <bits/stdc++.h> 
#define ll long long int
using namespace std; 

int findgap(int val)
{
    if(val<=1) return 0;
	return (val/2)+(val%2);
}

void mergetwosort(vector<int>&a,vector<int>&b,int n,int m)
{

	for(int gap=findgap(n+m);gap>0;gap=findgap(gap))
	{
		int i,j;
		for(i=0;i+gap<n;i++)
		{
			if(a[i]>a[i+gap]) swap(a[i],a[i+gap]);
		}
		for(int j=gap>n ? gap-n:0;i<n && j<m;i++,j++)
		{
			if(a[i]>b[j]) swap(a[i],b[j]);
		}
		if(j<m)
		{
			for(int j=0;j+gap<m;j++)
			{
				if(b[j]>b[j+gap]) swap(b[j],b[j+gap]);
			}
		}
	}
}

int main() 
{ 
	// #ifndef ONLINE_JUDGE
	// freopen("input1.txt","r",stdin);
	// freopen("output1.txt","w",stdout);
	// #endif
	int n,m;
	cin>>n>>m;
	vector<int>a,b;
	for(int i=0;i<n;i++)
	{
		int k;
		cin>>k;
		a.push_back(k);
	}
	for(int i=0;i<m;i++)
	{
		int k;
		cin>>k;
		b.push_back(k);
	}

	mergetwosort(a,b,n,m);
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
	for(int j=0;j<m;j++) cout<<b[j]<<" ";
	return 0; 
} 







