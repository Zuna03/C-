#include<iostream>
using namespace std;

int main()
{ 
    cout << "enter num of rows and coloumns" << endl;

    int n,m;
    cin >> n >> m;
    int a[n][m];

     cout <<"enter elements for matrix" << endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "the matrix is" << endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}