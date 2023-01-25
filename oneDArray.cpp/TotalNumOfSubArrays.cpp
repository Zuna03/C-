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
     int ans=0;
     for(int i=0;i<n;i++)
     {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout << array[k] << " ";
            }
            cout << endl;
    
             ans+=1;
        }
        
    
     }

      cout << ans << endl;
      return 0;
  }