#include<iostream>
using namespace std;

int isPowOf2(int n)
{
    return (n && !(n & n-1));
}
int main()
{
int n;
cin >> n;

cout << isPowOf2(n) << endl;

    return 0;
}