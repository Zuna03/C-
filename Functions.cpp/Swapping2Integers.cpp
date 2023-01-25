#include<iostream>
using namespace std;

void swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;

    

    cout << a <<b;
    return ;

}
int main(){
    
    int n1,n2;
    cin >> n1 >> n2;

    swap(n1,n2);

    return 0;
}
