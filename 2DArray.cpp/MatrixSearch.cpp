#include<iostream>
using namespace std;

bool search(int arr[n][m], int key)

int main()
{ 
    cout << "enter num of rows and coloumns" << endl;

    int n,m;
    cin >> n >> m;
    int a[n][m];

    int key;
    cin >> key;

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