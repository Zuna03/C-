#include <bits/stdc++.h>
using namespace std;

int countPath(int n , int m , int i , int j)
{
    if(i >= n || j >= m)
    return 0;
    
    if(i == n-1 && j==m-1)
    return 1;

    int count = 0;
    count += countPath(n, m , i+1 , j) +countPath(n , m , i , j+1);

    return count;
}
int main()
{
   cout << countPath(3 , 3 , 0 , 0);
   return 0;
}