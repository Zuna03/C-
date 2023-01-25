#include<iostream>
using namespace std;

int sum(int num)
{
    int answer=0;
    for(int i=1;i<=num;i++)
    {
        answer+=i;
    }
    return answer;
}
 int main(){
    
    int n;
    cin >> n;

    int ans=sum(n);
    cout << ans;

     return 0;
 }