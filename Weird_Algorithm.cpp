#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long x;
    cin >> x;
    while (x != 1)
    {
        cout << x << " ";
        if (x % 2 == 0)
            x /= 2;
        else
            x = 3 * x + 1;
    }
    cout << 1;
}