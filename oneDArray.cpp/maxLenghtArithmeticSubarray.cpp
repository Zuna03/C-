#include<iostream>
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
      int ans=2;
      int cd=a[1]-a[0];
      int curr=2;
      int j=2;
      
      while(j<n)
      {
          if(cd==a[j]-a[j-1])
          {
             curr++;
          }
          else{
            cd=a[j]-a[j-1];
            curr=2;
          }
          ans=max(ans,curr);
          j++;
      }
    
      cout << ans;
      return 0;
  }