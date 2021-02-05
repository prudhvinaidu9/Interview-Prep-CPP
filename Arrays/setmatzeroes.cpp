#include<bits/stdc++.h>
using namespace std;

void setmat(vector<vector<int> >& mat) {
    int col0=1;
    int rows=mat.size();
    int cols=mat[0].size();
    for(int i=0;i<rows;i++)
    {
        if(mat[i][0]==0) col0=0;
        for(int j=1;j<cols;j++)
        {
            if(mat[i][j]==0) mat[i][0]=mat[0][j]=0;
        }
    }
    for(int i=rows-1;i>=0;i--)
    {
        for(int j=cols-1;j>=1;j--)
        {
            if(mat[i][0]==0 || mat[0][j]==0)
                mat[i][j]=0;
        }
        if(col0==0) mat[i][0]=0 ;
    }
}
int main() {
    int m,n;
    cin>>m>>n;
    vector<vector<int> > mat;
    for(int i=0;i<m;i++)
    {
        vector<int>dum;
        for(int j=0;j<n;j++)
        {
            int k;
            cin>>k;
            dum.push_back(k);
        }
        mat.push_back(dum);
    }
    setmat(mat);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}