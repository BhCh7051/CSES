#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll a[n], minturns = 0, max;
    for (size_t i = 0; i < n; i++)
        cin >> a[i];
    max = a[0];
    for (size_t i = 1; i < n; i++)
    {
        if (a[i] < max)
        {
            minturns += max - a[i];
        }
        else
            max = a[i];
    }
    cout << minturns << endl;