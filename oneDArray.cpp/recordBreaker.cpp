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
     int ans=0;

     for(int i=0;i<n;i++)
     {
         if(a[i] > maxnum && a[i] > a[i+1])
         {
             ans++;
         }
         
         maxnum=max(a[i],maxnum);

     }
     
     cout << ans << endl;
     
      return 0;
  }