#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int Xor = 1;
    for (int i = 2; i <= n; i++)
        Xor ^= i;
    for (int i = 0; i < n - 1; i++)
    {
        int t;
        cin >> t;
        Xor ^= t;
    }
    cout << Xor << endl;
}