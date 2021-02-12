#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	vector<string> s(n), t;
	rep(i, n) cin >> s[i];
	sort(s.begin(), s.end());
	rep(i, n) rep(j, n)
	{
		if (i == j) continue;
		t.push_back(s[i] + s[j]);
	}
	sort(t.begin(), t.end());
	cout << t[0] << endl;
	return 0;
}
