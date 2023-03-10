#include <bits/stdc++.h>
using namespace std;

int knapSack(int value[] , int weight[] , int n , int W)
{
    if(n == 0 || W == 0)
    return 0;

    if(weight[n-1] > W)
    return knapSack(value , weight , n-1 , W);

    return max(knapSack(value , weight , n-1 , W-weight[n-1]) + value[n-1] , knapSack(value , weight , n-1 , W) );
}
int main()
{
   int value[] = {100 , 50 , 150};
   int weight[] = {10 , 20 , 30};
   int W = 50;

   cout << knapSack(value , weight , 3 , W);
   
   return 0;
}