#include <bits/stdc++.h>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    //inserting
    s.insert(1);
    s.insert(2);
    s.insert(3);

    //printing
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    //printing reverse
    for (auto i = s.rbegin(); i != s.rend(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    //custom comparator
    set<int, greater<int>> s1; //prints in descending order
    s1.insert(6);
    s1.insert(5);
    s1.insert(7);
    for (auto i : s1)
    {
        cout << i << " ";
    }
    cout << endl;

    //lower bound and upper bound
    set<int> s2;
    s2.insert(1);
    s2.insert(3);
    s2.insert(5);

     cout << (s2.lower_bound(1) == s2.begin()) << endl;
    cout << *s2.lower_bound(2) << endl;
    cout << *s2.lower_bound(3) << endl;
    cout << *s2.lower_bound(5) << endl;

    cout << *s2.upper_bound(1) << endl;
    cout << *s2.upper_bound(3) << endl;
    cout << (s2.upper_bound(5)==s2.end()) << endl;

    return 0;
}