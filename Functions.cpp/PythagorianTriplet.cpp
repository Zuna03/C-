#include<iostream>
using namespace std;

int max(int a,int b,int c)
{
 
  if(a>b)
    {
        if(a>c)
        return a;
        else
        return c;
    }
    else
    {
       if(b>c)
       return b;
       else
       return c;
    }

}

  bool pytho(int x,int y,int z)
  {
     int a=max(x,y,z);
     int b,c;
     if(a==x)
     {
         b=y;
         c=z;
     }
     if(a==y)
     {
         b=x;
         c=z;
     }
     if(a==z)
     {
         b=x;
         c=y;
     }
     if(a*a==b*b+c*c)
     {
         return true;
     }
     else
     {
         return false;
     }

  }
  int main(){
      
      int n1,n2,n3;
      cin >> n1 >>n2 >>n3;

     if(pytho(n1,n2,n3))
     {
         cout <<"yes";
     }
     else
     {
         cout <<"no";
     }

      return 0;
  }