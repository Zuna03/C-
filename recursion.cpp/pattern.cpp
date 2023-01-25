#include<bits/stdc++.h>
using namespace std;


 void pattern(int n,int i)
 {
   if(n==0)
   return;

   if(i<n)
   {
     pattern(n,i+1);
     cout << "*";
   }

   else
   
   {
     
     pattern(n-1,0);
     cout << endl;
   }
 
 }
 int main()
 {
   pattern(5,0);
   
   return 0;
 }