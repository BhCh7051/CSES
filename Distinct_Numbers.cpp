#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n;
    set<int> a;
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        a.insert(x);
    }
    cout << a.size() << endl;
}