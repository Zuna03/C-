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

    cout << "enter element need to be searched" << endl;
    int element;
    cin >> element;
    
    int r=0;
    int c=m-1;
    bool flag=false;

while(r<n && c>=00)

{
    if(a[r][c]==element)
    {
    flag= true;
    break;
    }

    if(a[r][c]>element)
    {
    c--;
    }
    
    else
    {
    r++;
    }
    flag=false;
}       

 cout << endl;
 
 if(flag==true)
 {
 cout << "element found" << endl;
 }
 else
 {
 cout << "element not found" << endl;
 }
     
    return 0;
}