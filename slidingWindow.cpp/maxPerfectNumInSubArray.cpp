#include <bits/stdc++.h>
using namespace std;

bool isPerfect(int n)
{
    int sum = 1;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
            if (i == n / i)
                sum += i;
            else
                sum += i + n / i;
    }
    if (sum == n && n != -1)
        return true;
    else
        return false;
}

int maxSum(int arr[], int n, int k)
{
    if (n < k)
    {
        cout << "Invalid\n";
        return -1;
    }
    int res = 0;
    for (int i = 0; i < k; i++)
    {
        res += arr[i];
    }
    int sum = res;
    for (int i = k; i < n; i++)
    {
        sum += arr[i] - arr[i - k];
        res = max(sum, res);
    }
    return res;
}

void maxPerfectNUm(int arr[], int n, int k)
{
    if (n < k)
    {
        cout << "Invalid\n";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (isPerfect(arr[i]))
            arr[i] = 1;
        else
            arr[i] = 0;
    }
    int ans = maxSum(arr, n, k);
    cout << ans;
}

int main()
{
    int arr[] = {28, 2, 3, 6, 496, 99, 8128, 24};
    int k = 4;
    int n = 8;

    maxPerfectNUm(arr, n, k);

    return 0;
}