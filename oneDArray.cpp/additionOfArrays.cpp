#include<iostream>
using namespace std;

  int main(){
     
    cout <<"enter size of array" << endl;

    int n;
    cin >>n;


     int array1[n];
     
     int sum=0;
     for(int i=0;i<n;i++)
     {
         cin >> array1[i];
     }
    
     for(int i=0;i<n;i++)
     {
         sum+=array1[i];

     }
     cout << sum << endl;
     
     

      return 0;
  }