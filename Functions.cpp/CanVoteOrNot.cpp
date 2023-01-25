#include<iostream>
using namespace std;

void vote(int num)
{
    if(num<18)
    cout << "can't vote";
    else
    cout <<"can vote";

    return;
}
  int main(){
     
     int n;
     cin >> n;

     vote(n);

      return 0;
  }