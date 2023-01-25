#include<bits/stdc++.h>
using namespace std;
int main()
{

int n;
cin >> n;
cin.ignore();

char a[n+1];

cin.getline(a,n);
cin.ignore();

int ans=0;
int maxl=INT_MIN;

for(int i=0;i<n;i++)
{
     ans+=i;
     maxl=max(maxl,ans);
  if(a[i]=='\0' || ' ')
  {
     break;
  }
}
cout << maxl;
return 0;
}