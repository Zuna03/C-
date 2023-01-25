#include<iostream>
using namespace std;

void fib(int n)

{

  int num1=0 ;
  int num2=1;
  int num3 ;

for(int i=1;i<=n;i++)
{
    cout << num1 << endl;
    num3=num1+num2;
    num1=num2;
    num2=num3;
} 
   return ;
}


 int main (){

  int n;
  cin >> n;
  
  fib(n);

return 0;
 }