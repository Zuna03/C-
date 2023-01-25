#include<iostream>
using namespace std;

  int main(){
      
      cout << "enter num of rows" << endl;
      int n;
      cin >> n;

     

      for(int i=1;i<=n;i++)
      {
           int ans=1;
          for(int j=1; j<=n-i;j++)
          {
             cout << " " ;
          }
          for(int j=1;j<=i;j++)
          {
              
             cout <<ans<<" ";
             ans=ans*((i-j)/j);
        
          }
          
           cout << endl;
      }
           
      return 0;
  }