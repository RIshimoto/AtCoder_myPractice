#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long n, m, ans;
	map<char, int> S;
	vector<long long> sum;

	cin >> n;
	rep(i, n)
	{
		string s;
		cin >> s;
		if (s[0] == 'M' || s[0] == 'A' ||\
				s[0] == 'R' || s[0] == 'C' || s[0] == 'H')
			S[s[0]]++;
	}
	for (auto p: S)
	{
		auto v = p.second;
		sum.push_back(v);
	}
	ans = 0;
	m = sum.size();
	rep(i, m - 2)
		FOR(j, i + 1, m - 1)
			FOR(k, j + 1, m)
				ans += sum.at(i) * sum.at(j) * sum.at(k);
	cout <<  ans << endl;
	return 0;
}
