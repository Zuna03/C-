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
     int currsum;
     int maxsum=INT_MIN;
     for(int i=0;i<n;i++)
     {
        currsum+=array[i];
        if(currsum<0)
        {
            currsum=0;
        }
        maxsum=max(maxsum,currsum);
     }

     cout << maxsum << endl;
      return 0;
  }