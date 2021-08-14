// Problem: B. Alphabetical Strings
// Contest: Codeforces - Codeforces Round #731 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1547/B
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
	string str;
	cin >> str;
	bool ans = true;
	size_t n = str.size();
	size_t L = str.find('a');
	if(L == string::npos)
	{
		cout << "NO" << "\n";
		return;
	}
	else
	{
		size_t R = L;
		for(int i=1; i<n; i++)
		{
			size_t pos = str.find(char('a' + i));
			if(pos == string::npos || (pos != L-1 && pos != R+1))
			{
				ans = false;
				break;
			}
			else
			{
				L = min(L,pos);
				R = max(R,pos);
			}
		}
		if(ans)
		{
			cout << "YES" << "\n";
		}
		else
		{
			cout << "NO" << "\n";
		}
	}
}

int32_t main()
{
	int tc = 1;
	cin >> tc;
	while(tc--)
	{
		solve();
	}
	return 0;
}
