#include<bits/stdc++.h>
using namespace std;

int kadane(int array[],int n)
{

     int currsum=0;
     int maxsum=INT_MIN;

     for(int i=0;i<n;i++)
     {
         currsum+=array[i];
         if(currsum<0)
         {
            currsum=0;
         }

         maxsum=max(maxsum,currsum);
     }
     return maxsum;
}

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
    
    int wrapsum;
    int nonwrapsum;

    nonwrapsum= kadane(array,n);
    
    int sum=0;

     for(int i=0;i<n;i++)
     {
        sum+=array[i];
        array[i]=-array[i];
     }

     wrapsum=sum+kadane(array,n);

     cout << max(wrapsum,nonwrapsum);

      return 0;
  }