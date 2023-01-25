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
     
     while(counter<n)
     {
     for(int i=0;i<n-counter;i++)
     {
        
             if(a[i+1]<a[i])
             {
                 int temp;
                 temp=a[i+1];
                 a[i+1]=a[i];
                 a[i]=temp;
             }
     } 
        counter++;
     }

     for(int i=0;i<n;i++)
     {
         cout << a[i] << " ";
     }
     cout << endl;


      return 0;
  }