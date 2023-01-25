#include<iostream>
using namespace std;

int GetBit(int n, int pos)
{
    return (n | (1<<pos));
}
int main()
{
    cout << GetBit(5,1);
    return 0;
}