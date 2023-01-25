#include<iostream>
using namespace std;

  int main(){
      
      cout << "enter num of rows" << endl;
      int n;
      cin >> n;

      for(int i=1;i<=n;i++)
      {
       
          for(int j=1; j<=n-i;j++)
          {
             cout << " " ;
          }
          
         for(int j=1;j<=i;j++)
         {
             if(j==1)
             {
                 cout << "*";
             }
             else{
                 cout << " ";
             }
         }
         for(int j=1;j<=i-1;j++)
         {
             if(j==i-1)
             {
                 cout <<"*";
             }
             else{
                 cout << " ";
             }
         }
          
          
          
           cout << endl;
      }
      
          for(int i=n;i>=1;i--)
      {
       
          for(int j=1; j<=n-i;j++)
          {
             cout << " " ;
          }
          
         for(int j=1;j<=i;j++)
         {
             if(j==1)
             {
                 cout << "*";
             }
             else{
                 cout << " ";
             }
         }
         for(int j=1;j<=i-1;j++)
         {
             if(j==i-1)
             {
                 cout <<"*";
             }
             else{
                 cout << " ";
             }
         }
          
          
          
           cout << endl;
      }
           
      return 0;
  }