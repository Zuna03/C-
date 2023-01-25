#include<bits/stdc++.h>
using namespace std;

int decimalToBinary(int n)
{
    int rem;
    int ans=0;
    int i=1;

    while(n!=0)
    {
     rem=n%2;
     n/=2;
     ans=ans+(rem*i);
     i*=10;
    }
    return ans;
}
int main(){
    
    int num;
    cin >> num;

    cout << decimalToBinary(num) << endl;

    return 0;
}