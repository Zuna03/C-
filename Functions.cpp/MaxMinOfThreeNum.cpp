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
int min(int a,int b,int c)
{
    if(a<b)
    {
        if(a<c)
        return a;
        else
        return c;
    }
    else
    {
       if(b<c)
       return b;
       else
       return c;
    }

}

  int main(){
      
      int n1,n2,n3;
      cin >> n1 >>n2 >>n3;

      int ans1=max(n1,n2,n3);
      cout << ans1<<endl;
       
    
      int ans2=min(n1,n2,n3);
      cout << ans2;

      


            return 0;
  }