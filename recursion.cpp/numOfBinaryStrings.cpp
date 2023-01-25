#include<bits/stdc++.h>
using namespace std;

void printBin(int n)
{
   int a[n];
   int i=0;

   if(a[i]==a[i+1])
   return ;

   while(i<n)
   cout << a[i];
   i++;


}

int main()
{
    int n;
    cin >> n;

    printBin(n);
    
    return 0;
}
