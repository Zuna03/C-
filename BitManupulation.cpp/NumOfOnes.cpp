#include<iostream>
using namespace std;
int numOfOnes(int n)
{
    int sum=0;

    while(n !=0)
    {
        n=(n&(n-1));
        sum ++;
    }

    return sum;
}
int main()
{
    int n;
    cin >> n;
    
    cout << numOfOnes(n) << endl;
    return 0;
}