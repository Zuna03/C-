#include<iostream>
using namespace std;
 
  int main(){
  
  int i=10;
  int j =20;
  
  int m;
 m= i-- - i++ + --j + --i - j-- + ++i - j++;

  cout << i <<" " << j <<" "  << m << endl;
  return 0;
  }