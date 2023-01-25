#include<bits/stdc++.h>
using namespace std;

  int main(){
     
    cout <<"enter size of array" << endl;

    int n;
    cin >>n;


     int a[n];
     int counter=1;
     
    
     for(int i=0;i<n;i++)
     {
         cout <<"enter elements of array" << endl;
         cin >> a[i];
       
     }
     
     int maxnum=INT_MIN;

     for(int i=0;i<n;i++)
     {
         maxnum=max(maxnum,a[i]);
         cout << maxnum << " ";
     }
     
     
     
      return 0;
  }