#include<iostream>
using namespace std;

  int main(){
      
      cout << "enter num of rows" << endl;
      int n;
      cin >> n;

      for(int i=1;i<=n;i++)
      {
          int j;
          for(j=1; j<=n-i;j++)
          {
             cout << " " ;
          }
          
          for(;j<=n;j++)
          {
                 cout << "*";
                 
          }
             
          for(;j<=n+i-1;j++)
             {
                 cout << "*";
                
             }
             cout << endl;
      }
          for(int i=n;i>=1;i--)
      {
          int j;
          for(j=1; j<=n-i;j++)
          {
             cout << " " ;
          }
          
          for(;j<=n;j++)
          {
                 cout << "*";
                 
          }
             int k=2;
          for(;j<=n+i-1;j++)
             {
                 cout << "*";
                
             }
          
          
          
           cout << endl;
      }
           
      return 0;
  }