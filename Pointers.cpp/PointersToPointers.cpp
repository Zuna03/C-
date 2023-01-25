#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=10;
    int *p;
    p=&a;

    int **q=&p;

    cout << *p << endl;
    cout << **q << endl;
    
    int ***r=&q;
    cout << *r << endl;
     cout << **r<< endl;
      cout << ***r << endl;
       cout << &q << endl;
    
   
     
    return 0;
}