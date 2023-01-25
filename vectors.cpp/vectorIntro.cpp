#include <bits/stdc++.h>
using namespace std;


int main()
{
   vector<int>v;
   v.push_back(5);
   v.push_back(2);
   v.push_back(7);
   vector<int>x{8,9,1};

//   for (int i = 0; i < v.size(); i++)
//   {
//       cout << v[i] << " ";
//   }
//   cout << endl;

//   vector<int> :: iterator it;
//   for(it=v.begin() ; it < v.end() ; it++)
//   {
//       cout << *it << " ";
//   }
//   cout << endl;

//   for(auto element : v)
//   {
//       cout << element << " ";
//   }
//   cout << endl;

  // v.pop_back();

  //  for(auto element : v)
  // {
  //     cout << element << " ";
  // }
  // cout << endl;
//  vector<int>v2(3,50);

//  swap(v,v2);
//   for(auto element : v)
//   {
//       cout << element << " ";
//   }
//   cout << endl;
//  for(auto element : v2)
//   {
//       cout << element << " ";
//   }
//   cout << endl;

// sort(v.begin(),v.end());
// v.erase(v.end()-1);

//  for(auto element : v)
//   {
//       cout << element << " ";
//   }
//   cout << endl;

// cout << v.front() << endl;
// cout << v.back() << endl;

v.insert(v.begin(),x.begin(),x.end());
for(auto element:v)
cout << element <<" ";
return 0;
}