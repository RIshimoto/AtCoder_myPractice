#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, r, cnt;
	string s;
	vector<string> vec;
	bool ok;
	
	cin >> n >> r >> s;
	int i = 0;
	while(i < n)
	{
		if (s[i] == 'o')
			i++;
		else
		{
			vec.push_back(s.substr(i, r));
			i += r;
		}
	}
	// idou
	for(int i = n - 1; i >= 0; i--)
	{
		if (s[i] == '.')
		{
			cnt = max(0, i - r + 1);
			break;
		}
	}
	// utu
	rep(i, vec.size())
	{
		ok = true;
		rep(j, vec[i].size())
		{
			if (vec[i][j] == '.')
				ok = false;
		}
		if (!ok)
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}
