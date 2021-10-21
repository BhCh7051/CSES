#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;
    int Max = 0, same = 1;
    for (size_t i = 1; i < str.size(); i++)
    {
        if (str[i] == str[i - 1])
            same++;
        else
        {
            if (Max < same)
                Max = same;
            same = 1;
        }
    }
    if (Max < same)
        Max = same;
    same = 1;
    cout << Max << endl;
}