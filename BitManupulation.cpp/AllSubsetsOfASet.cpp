#include<iostream>
using namespace std;

void subsetsOfASet (int arr[] , int n)
{
    for(int i=0 ; i < (1<<n) ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(i & (1<<j))
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[2] = {1,2};

    subsetsOfASet (arr,2);
    return 0;
}