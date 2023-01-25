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
          int p=i;
          for(int j=1;j<=i;j++)
          {
                 cout << p;
                 p--;
          }
             int k=2;
          for(int j=1;j<=i-1;j++)
             {
                 cout << k;
                 k++;
             }
          
          
          
           cout << endl;
      }
           
      return 0;
  }