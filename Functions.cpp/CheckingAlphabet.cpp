#include<iostream>
using namespace std;

  bool check(char x)
  {
      if(x>='a' && x<='z' || x>='A' && x<='Z')
      {
          return true;
      }
      else
      {
          return false;
      }
  }
  int main(){
      
      char c;
      cin >> c;

      if(check(c))
      {
          cout << "yes alphabet";
          
      }
      else
      {
          cout << "no" ;
      }
      return 0;
  }