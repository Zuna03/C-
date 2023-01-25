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
   int code = ch;

    subString(ros , ans );
    subString(ros , ans+ch);
    subString(ros , ans + to_string(code));

}
int main()
{
   subString("AB" , " ");

   return 0;
}