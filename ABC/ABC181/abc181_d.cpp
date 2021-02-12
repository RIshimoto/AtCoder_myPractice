#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s, t;
	map<char, int> mp, tp; 
	int n;

	cin >> s;
	n = s.size();
	rep(i, n) mp[s[i]]++;
	if (n >= 3)
	{
		for (int i = 104; i < 1000; i += 8)
		{
			int x = i;
			tp = mp;
			bool ok = true;
			rep(j, 3) 
			{
				if (tp[x % 10 + '0'] == 0)
					ok = false;
				else
					tp[x % 10 + '0']--;
				x /= 10;
			}
			if (ok)
			{
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	else
	{
		sort(s.begin(), s.end());
		set<string> st;
		for (int i = 8; i < 100; i+=8)
			st.insert(to_string(i));
		do
		{
			if (st.count(s))
			{
				cout << "Yes" << endl;
				return 0;
			}
		}while(next_permutation(s.begin(), s.end()));
	}
	cout << "No" << endl;
	return 0;
}
