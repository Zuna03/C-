#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> s;

    //inserting
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(3);

    //printing
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    s.erase(3);
    for (auto i : s)
    {
        cout << i << " ";
    }
    // s.erase(s.find(3));
    // for (auto i : s)
    // {
    //     cout << i << " ";
    // }
    return 0;
}