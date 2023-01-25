#include<iostream>
using namespace std;

  int main(){
      
      cout << "enter num of rows" << endl;
      int n;
      cin >> n;

      for(int i=n;i>=1;i--)
      {
          
          for(int j=1; j<=n;j++)
          {
             if(j<i)
             cout <<" ";
          
              if(j==i)
              {
                  cout << "*";
              }
          }
          for(int j=1; j<=n-1;j++)
          {
              cout <<" *";
          }
          
           cout << endl;
      }
           
      return 0;
  }