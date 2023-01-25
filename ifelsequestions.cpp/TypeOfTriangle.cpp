#include<iostream>
using namespace std;

  int main(){
     
     cout << "enter three sides of triangle" << endl;
     
     int a,b,c;
     cin >> a >> b >> c;
     if(a==b && b==c)
     {
         cout << "equilateral triangle" << endl;
         
     }
     else if(a==b || a==c || b==c)
         {
             cout << "isoceles triangle" << endl;
             
         } 
        cout << "scalene triangle" << endl;
          
    
     
     

      return 0;
  }