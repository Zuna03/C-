#include<iostream>
using namespace std;

 int main(){
    int sum=0;

    cout << "enter a num" << endl;
    int n;
    cin >> n;

    while(n>=0)
    {
        sum=sum+n;
        cout << "enter a num" << endl;
        cin >>n;
    }
    
    cout << "the sum is =" <<" " << sum << endl;
    
     return 0;
 }