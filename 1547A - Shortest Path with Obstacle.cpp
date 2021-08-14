#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int a1,b1,a2,b2,a3,b3;
    cin >> a1 >> b1;
    cin >> a2 >> b2;
    cin >> a3 >> b3;
    if(a1 == a2 && a2 == a3 && a1 == a3)
    {
        if(b3 >= min(b1,b2) && b3 <= max(b1,b2))
        {
            cout << abs(b2-b1)+2 << "\n";
        }
        else
        {
            cout << abs(b1-b2) << "\n";
        }
    }
    else if (b1 == b2 && b2== b3 && b1 == b3)
    {
        if (a3 >= min(a1,a2) && a3 <= max(a2,a1))
        {
            cout << abs(a2 - a1) + 2 << "\n";
        }
        else
        {
            cout << abs(a1 - a2) << "\n";
        }
    }
    else
    {
        cout << abs(a2-a1) + abs(b2-b1) << "\n";
    }
}

int32_t main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}

