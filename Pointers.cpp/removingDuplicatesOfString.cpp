#include<bits/stdc++.h>
using namespace std;

string removingDuplicates(string s)
{
   if(s.length()==0)
   return " ";


   string  ans= removingDuplicates(s.substr(1));

   if( s[0]==ans[0])
   return ans;

   else
   return  s[0]+ans;

   

}
int main()
{
  
  cout << removingDuplicates("aaaabbbeeecdddd");
  return 0;
}