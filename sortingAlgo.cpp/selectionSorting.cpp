#include<bits/stdc++.h>
using namespace std;

  int main(){
     
    cout <<"enter size of array" << endl;

    int n;
    cin >>n;


     int a[n];

     for(int i=0;i<n;i++)
     {
         cout <<"enter elements of array" << endl;
         cin >> a[i];
       
     }
     for(int i=0;i<n-1;i++)
     {
         for(int j=i+1;j<n;j++)
         {
             if(a[j]<a[i])
             {
                 int temp;
                 temp=a[j];
                 a[j]=a[i];
                 a[i]=temp;
             }
         }

     }

     for(int i=0;i<n;i++)
     {
         cout << a[i] << " ";
     }
     cout << endl;


      return 0;
  }