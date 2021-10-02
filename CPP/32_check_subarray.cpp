//Find whether an array is a subset of another array
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll x, flag = 0;
        vector<ll> a;
        vector<ll> b;
        map<ll, int> ma;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
            ma[a[i]]++;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            b.push_back(x);
        }
        for (int i = 0; i < m; i++)
        {
            if (ma[b[i]] == 0)
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}