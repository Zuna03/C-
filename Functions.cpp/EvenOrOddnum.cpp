#include<iostream>
using namespace std;

    
    void evenodd(int num)
    {
        if(num%2==0)
        cout <<"even";
        else
        cout <<"odd" ;

        return;
    }

    
int main(){

    int n;
    cin >> n;

    evenodd(n);

    return 0;
}