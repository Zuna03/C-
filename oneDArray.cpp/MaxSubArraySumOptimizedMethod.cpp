#include<bits/stdc++.h>
using namespace std;

  int main(){
     
    cout <<"enter size of array" << endl;

    int n;
    cin >>n;


     int array[n];

     for(int i=0;i<n;i++)
     {
         cout <<"enter elements of array" << endl;
         cin >> array[i];
       
     }

     int ans=0;
     int maxsum=INT_MIN;

     int currsum[n+1];
     currsum[0]=0;

     for(int i=1;i<=n;i++)
     {
        currsum[i]=currsum[i-1]+array[i-1];
        
     }

     for(int i=1;i<=n;i++)
     {
         for(int j=0;j<n;j++)
         {
             ans=currsum[i]-currsum[j];
             maxsum=max(maxsum,ans);
         }
     }

      cout << maxsum << endl;
      return 0;
  }