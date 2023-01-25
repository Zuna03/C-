#include<iostream>
using namespace std;

  int main(){
     
     int p=1;
     for(int i =1;i<=10;i++)
     {
         for(int j=1;j<=10;j++)
         {
             int product=i*j;
             cout << i << "*" << j <<"=" << product << endl;
         }
         cout << endl;
         cout << endl;
     }
      return 0;
  }