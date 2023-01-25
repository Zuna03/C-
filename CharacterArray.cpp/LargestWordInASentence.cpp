#include<bits/stdc++.h>
using namespace std;
int main()
{

cout << "enter size of array" << endl;
int n;
cin >> n;
cin.ignore();

char a[n+1];

cout << "enter characters of array" << endl;
cin.getline(a,n);
cin.ignore();

int currl=0;
int maxl=0;
int st=0;
int maxst=0;

for(int i=0;i<n;i++)
{

    if(a[i]==' ' || a[i]=='\0')
    {
        if(currl > maxl)
        {
            maxl=currl;
            maxst=st;
        }
        currl=0;
        st=i+1;
    }

    else
    currl++;

    if(a[i]=='\0')
    break;

    

}

cout << maxl << endl;

for(int i=0;i<maxl;i++)
{
    cout << a[i+maxst] ;
}
return 0;
}