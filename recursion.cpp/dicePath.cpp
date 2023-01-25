#include<bits/stdc++.h>
using namespace std;

int totalPaths=0;

void dicePath(int n,int i,string osf)
{
    if(i==n-1)
    {
        totalPaths+=1;
        cout << osf << endl;;
        return;
    }

    if(i>=n)
    return ;

    for(int j=1;j<=6;j++)
    {
      dicePath(n,i+j,osf+to_string(j)+"->");
    }
    
    
}
int main()
{
   int n;
   cin >> n;

   dicePath(n,0," ");
   cout << "total paths are = " << totalPaths << endl;

    return 0;
}