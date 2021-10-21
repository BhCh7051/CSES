#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, sum, maxsum(0);
    cin >> n;
    if (n == 1)
    {
        cout << "1";
        return 0;
    }
    if (n < 4)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    vector<int> a(n);
    int t = 1;
    for (int i = 0; i < n; i++)
    {
        if (i < n / 2)
            cout << (i + 1) * 2 << " ";
        else
        {
            cout << (t) << " ";
            t += 2;
        }
    }

    return 0;
}