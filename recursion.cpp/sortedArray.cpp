#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[],int n,int i)
{
    if(n==1)
    return true;
  
  sorted(arr,n-1,i+1);

  if(arr[i] < arr[i+1])
  return true;
  else
  return false;
   
}
int main()
{
    int arr[]={1,2,6,4,5};

    cout << sorted(arr,5,0);
    return 0;
}