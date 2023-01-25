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

     for(int i=0;i<n;i++)
     {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                ans+=array[k];
                maxsum=max(maxsum,ans);
            }
            ans=0;
    
        }
        
      }

      cout << maxsum << endl;
      return 0;
  }