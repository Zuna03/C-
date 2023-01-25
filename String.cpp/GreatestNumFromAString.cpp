#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    int a=125478;
   string s= to_string(a);

    sort( s.end() , s.begin());

    cout << s;
   

    return 0;
}