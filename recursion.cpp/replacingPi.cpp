#include <bits/stdc++.h>
using namespace std;

void replace(string str,int i )
{
    if(str.size()==0)
    return;

    if(str[i] == 'p' && str[i+1] == 'i')
    {
        cout << "3.14" ;
       replace(str.substr(2),i);
    }
    else
    {
    cout << str[i];
    replace(str.substr(1),i);
}
}
int main()
{
   
   replace("pixxcpipixxv",0 );

   return 0;
}