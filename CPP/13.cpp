#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n)
{
    int cs = 0;
    int ms = 0;
    int m = arr[0];
    for (int i = 0; i < n; i++)
    {
        cs = cs + arr[i];
        if (cs < 0)
        {
            cs = 0;
        }
        ms = max(ms, cs);
    }
    return ms;
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << maxSubarraySum(a, n) << endl;
    }
    return 0;
};
