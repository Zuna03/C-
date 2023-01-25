#include<iostream>
#include<string>

using namespace std;

int main()
{
    string a="abnhabcachjaikb";
    int freq[26];

    for(int i=0;i<26;i++)
    freq[i]=0;
    
    for(int i=0 ; i<a.size() ;i++)
    {
        freq[a[i]-'a']++;
    }

 char ans='a';
 int maxfrequency=0;

  for(int i=0;i<26;i++)
  {
      if(maxfrequency<=freq[i])
      {
          maxfrequency=freq[i];
          ans=i+'a';
      }
  }


   cout << maxfrequency << endl;
   cout <<  ans << endl;
   

    
   

    return 0;
}