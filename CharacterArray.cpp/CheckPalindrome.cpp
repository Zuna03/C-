#include<bits/stdc++.h>
using namespace std;
int main()
{


int n;
cin >> n;

char a[n+1];
cin >> a;



int check=0;

for(int i=0;i<n;i++)
{
   if(a[i]==a[n-1-i])
   {
      check=1;
     
   }
   else
   {
       check=0;
       break;
   }
   
}
if(check==1)
{
    cout << "yes" << endl;
}
else
{
    cout << "no" << endl;
}

return 0;
}