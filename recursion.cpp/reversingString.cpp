#include <bits/stdc++.h>
using namespace std;

void reverse(string str,int i)
{
    if(i>=str.size())
    return;

    reverse(str,i+1);
    cout << str[i] << endl;
}

int main()
{
   reverse("shivabngi",0);

   return 0;
}