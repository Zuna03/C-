#include<iostream>
#include<cmath>
using namespace std;

int main(){
   
   int n;
   cin >> n;

   int x=n;
   int sum=0;

 while(x>0)
 {
    int lastdigit=x%10;
    int y = lastdigit*lastdigit*lastdigit;
    sum=sum+y;

    x=x/10;
 }
  
  if(sum==n)
  {
      cout << n << " " << "is an armstong num" << endl;
  }
  else{
      cout << n << " " << "is not an armstong num" << endl;
  }
 

    return 0;
}
