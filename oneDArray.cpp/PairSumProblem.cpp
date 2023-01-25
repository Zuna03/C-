#include<bits/stdc++.h>
using namespace std;

bool pairsum(int a[],int n,int k)
{
    int low=0;
    int high=n-1;

    while(low<high)
    {
        if(a[low]+a[high]==k)
        {
            cout << low << " " << high << endl;
            return true;
        }else if(a[low]+a[high] > k)
        {
            high--;
        }else
        {
            low++;
        }

    }
    return false;
}

int main()
{
    int a[]={2,4,7,8,16};
    int k=15;
    
    return 0;
}
