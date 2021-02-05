#include<bits/stdc++.h>
using namespace std;

int merge(int arr[],int temp[],int left,int mid,int right)
{
    int inv_count=0;
    int i=left;
    int j=mid;
    int k=left;
    while((i<=mid-1) && (j<=right))
    {
        if(arr[i]<=arr[j])
        {
            temp[k++]=arr[i++];
        }
        else {
            temp[k++]=arr[j++];
            inv_count+=mid-i;
        }
    }
    while(i<=mid-1)
    {
        temp[k++]=arr[i++];
    }
    while(j<=right)
    {
        temp[k++]=arr[j++];
    }
    for(int i=left;i<=right;i++)
    {
        arr[i]=temp[i];
    }
    return inv_count;
}

int mergesort(int arr[],int temp[],int left,int right)
{
    int inv=0,mid;
    if(right>left)
    {
        mid=(left+right)/2;
        inv+=mergesort(arr,temp,left,mid);
        inv+=mergesort(arr,temp,mid+1,right);
        inv+=merge(arr,temp,left,mid+1,right);
    }
    return inv;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int temp[n];
    int count=mergesort(arr,temp,0,n-1);
    cout<<count;
    return 0;
}