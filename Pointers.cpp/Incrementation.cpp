#include<bits/stdc++.h>
using namespace std;

void incrementation(int *a)
{
    *a++;
    return;
}
int main()
{
    int a=10;
    
    incrementation(&a);

    cout << a;
     
    return 0;
}