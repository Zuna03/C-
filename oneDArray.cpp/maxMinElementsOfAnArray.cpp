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
     for(int i=0;i<n;i++)
     {
        
         cout << array[i] << " ";
     }
     cout << endl;

     int maxnum=INT_MIN;
     int minnum=INT_MAX;

     for(int i=0;i<n;i++)
     {
        maxnum=max(maxnum,array[i]);
        minnum=min(minnum,array[i]);
        
     }
     cout << maxnum << "is the max " << endl;
     cout << minnum <<"is the min " << endl; 
    

    

      return 0;
  }