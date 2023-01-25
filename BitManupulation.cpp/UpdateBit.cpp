#include<iostream>
#include<string>

using namespace std;

int UpdateBit(int n,int pos,int val)
{
    int x= ~(1<< pos);
    n=(n & x);
    return (n | (val<<pos));
}
int main()
{

    cout << UpdateBit(5,1,1);
   

    return 0;
}