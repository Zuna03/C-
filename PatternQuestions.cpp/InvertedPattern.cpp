#include<iostream>
using namespace std;

  int main(){
      
      cout << "enter num of rows" << endl;
      int n;
      cin >> n;

      

      for(int i=n;i>=1;i--)
      {
          for(int j=1;j<=i;j++)
          {
             cout << j ;

          }
          cout  << endl;
      }
      return 0;
  }