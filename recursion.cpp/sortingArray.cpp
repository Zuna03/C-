#include <bits/stdc++.h>
using namespace std;

string soRt(string s,int i)
{
    if(s.size()==1)
    return s;

    char temp;
    if(s[i] > s[i+1])
    {
        temp=s[i];
        s[i]=s[i+1];
        s[i+1]=temp;
    }
    string ros=s.substr(1);
    soRt(ros,i);

    return s;

}
int main()
{
    string s;
    cin>>s;

    string ans=soRt(s,0);

    cout<<ans;

   return 0;
}



//2 3 4 7 6 4 5 9