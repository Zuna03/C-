#include<iostream>
using namespace std ;

 int main(){
    int n;
    cin >> n;

     if(n%2==0 && n%3==0){
        cout << "num divisible by both" << endl;
    }
    else if(n%3==0){
        cout << "num divisible by 3" << endl;
    }
    else if(n%2==0){
        cout << "num divisible by 2" << endl;
    }
   

     return 0;
 }