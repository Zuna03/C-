#include<iostream>
using namespace std;

int main()
{ 
    cout << "enter num of rows and coloumns" << endl;

    int n,m,x;
    cin >> n >> m >> x;
    int a[n][m];
    int b[m][x];

     cout <<"enter elements for first matrix" << endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> a[i][j];
        }
    }

    cout <<"enter elements for second matrix" << endl;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<x;j++)
        {
            cin >> b[i][j];
        }
    }

    int ans[n][x];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<x;j++)
        {
            ans[i][j]=0;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<x;j++)
        {
            for(int k=0;k<m;k++)
            {
               ans[i][j]+=a[i][k]*b[k][j];
            }

        }

    }

    cout << "the answer matrix is" << endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<x;j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}