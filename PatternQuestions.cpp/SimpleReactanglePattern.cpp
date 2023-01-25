#include<iostream>
using namespace std;

  int main(){
      
      cout << "enter num of rows" << endl;
      int n;
      cin >> n;

      cout << "enter num of columns" << endl;
      int m;
      cin >> m;

      for(int i=1;i<=n;i++)
      {
          for(int j=1;j<=m;j++)
          {
              cout << "*" <<" ";
          }
          cout  << endl;
      }
      return 0;
  }