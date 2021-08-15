#include <bits/stdc++.h>
#define int long long
using namespace std;


void solve()
{
    int n;
    string str;
    cin >> n >> str;
    int idx = -1;
    for(int i=0; i<n; i++)
    {
        if(str[i] != '?')
        {
            idx = i;
            break;
        }
    }
    if(idx == -1)
    {
        for(int i=0; i<n; i++)
        {
            if(i%2 == 0)
            {
                cout << "B";
            }
            else
            {
                cout << "R";
            }
        }
        cout << "\n";
    }
    else
    {
        for(int i=idx-1; i>=0; i--)
        {
            if(str[i+1] == 'R')
            {
                str[i] = 'B';
            }
            else
            {
                str[i] = 'R';
            }
        }
        for(int i=idx+1; i<n; i++)
        {
            if(str[i] != '?')
            {
                continue;
            }
            if(str[i-1] == 'R')
            {
                str[i] = 'B';
            }
            else
            {
                str[i] = 'R';
            }
        }
        cout << str << "\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}
