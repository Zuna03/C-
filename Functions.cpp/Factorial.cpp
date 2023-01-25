#include<iostream>
using namespace std;

 int factorial(int num)
{
    int result=1;
  for(int i=1;i<=num;i++)
  {
      result*=i;
     
  }
  
  return result ;
}
int main(){

    int n;
    cin >>n;

    int ans =factorial(n);
    cout <<ans <<endl;

    return 0;

}