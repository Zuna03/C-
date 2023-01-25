#include <bits/stdc++.h>
using namespace std;

void subString(string str , string ans)
{
   if(str.length() == 0)
   {
      cout << ans << endl;
      return;
   }

   char ch = str[0];
   string ros = str.substr(1);

    subString(ros , ans );
    subString(ros , ans+ch);

}
int main()
{
   subString("ABC" , " ");

   return 0;
}