#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > pascaltriangle(int n)
{
    vector<vector<int> > pas(n);
    for(int i=0;i<n;i++)
    {
        pas[i].resize(i+1);
        pas[i][0]=1;
        pas[i][i]=1;
        for(int j=1;j<i;j++)
        {
            pas[i][j]=pas[i-1][j-1]+pas[i-1][j];
        }
    }
    return pas;
}

void printpascalline(int n)
{
    n=n-1;
    int res=1;
    for(int i=0;i<n+1;i++)
    {
        cout<<res<<" ";
        res*= n-i;
        res/= i+1;
    }
}

void printpascalnumber(int rowno,int colno)
{
    rowno=rowno-1;
    colno=colno-1;
    int res=1;
    for(int i=0;i<rowno+1;i++)
    {
        if(colno==0) cout<<res<<" ";
        res*= rowno-i;
        res/= i+1;
        colno--;
    }   
}



int main()
{
    int n;
    cin>>n;
    vector<vector<int> > ans=pascaltriangle(n);
    int k=ans.size();
    for(int i=0;i<ans.size();i++)
    {
        k--;
        int p=k;
        while(p--)
        {
            cout<<" ";
        }
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //To Print Only One line
    int row;
    cin>>row;
    printpascalline(row);
    cout<<endl;
    //To Print at Particular Position
    int rowno;
    cin>>rowno;
    int colno;
    cin>>colno;
    printpascalnumber(rowno,colno);
    return 0;
}

