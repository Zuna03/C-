#include<iostream>
using namespace std;

  int main(){
     
    cout <<"enter size of array" << endl;

    int n;
    cin >>n;


     int array[n];

     for(int i=0;i<n;i++)
     {
         cout <<"enter elements of array" << endl;
         cin >> array[i];
       
     }
         for(int i=0;i<n;i++)
     {
          int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=array[j];

        cout << sum << endl;
        }
     }


      return 0;
  }