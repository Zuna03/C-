#include<iostream>
using namespace std;

int ClearBit(int n, int pos)
{
    int x= ~(1<< pos);
    return (n & x);
}
int main()
{
    cout << ClearBit(5,2);
    return 0;
}