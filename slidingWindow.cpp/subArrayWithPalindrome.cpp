#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n)
{
    int num = 0, temp = n;
    while (temp > 0)
    {
        num = (num * 10) + temp % 10;
        temp = temp / 10;
    }
    if (num == n)
        return true;

    return false;
}

int palindrome(vector<int> arr, int k)
{
    int num = 0;
    for (int i = 0; i < k; i++)
    {
        num = num * 10 + arr[i];
    }
    if (isPalindrome(num))
        return 0;

    for (int i = k; i < arr.size(); i++)
    {
        num = (num % int(pow(10, k - 1))) * 10 + arr[i];
        if (isPalindrome(num))
            return i - k + 1;
    }
    return -1;
}
int main()
{
    vector<int> arr = {2, 3, 5, 1, 1, 5};
    int k = 4;

    int idx = palindrome(arr, k);

    if (idx == -1)
        cout << "doesnt exists";
    else
    {
        for (int i = idx; i < idx + k; i++)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}