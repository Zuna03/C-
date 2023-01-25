#include<bits/stdc++.h>
using namespace std;


int numOfWays(int n)
{
    if(n==1 || n==2)
    return n;
    
    return numOfWays(n-1) + ((n-1)*numOfWays(n-2));

}

int main()
{
    int n;
    cin >> n;

   cout << numOfWays(n);
    
    return 0;
}
