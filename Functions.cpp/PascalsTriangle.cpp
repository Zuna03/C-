#include<iostream>
using namespace std;

  int pascal(int num)
  {
     int fact=1;
     for(int i=1;i<=num;i++)
     {
         fact*=i;
     }
     return fact;
  }

  int main(){
    
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int ans=pascal(i)/(pascal(j)*pascal(i-j));
            cout << ans;
        }
        cout << endl;
    }
      return 0;
  }