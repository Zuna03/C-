#include<iostream>
using namespace std;

  int main(){
      
      cout << "enter num of rows" << endl;
      int n;
      cin >> n;

      int x =1;

      for(int i=1;i<=n;i++)
      {
          for(int j=1;j<=i;j++)
          {
             cout << x << " ";
             x++ ;
          }
          cout  << endl;
      }

    
          return 0;
  }