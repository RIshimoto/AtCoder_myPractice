#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int d, m, n;
	int cnt;
	vector<int> from;

	cin >> d >> m >> n;
	rep(i, m - 1) 
	{
		int a;
		cin >> a;
		from.push_back(a);
	}
	from.push_back(0);
	from.push_back(d);
	sort(from.begin(), from.end());
	cnt = 0; 
	rep(i, n) 
	{
		int to;
		cin >> to;
		auto Iter1 = upper_bound(from.begin(), from.end(), to);
		int j = Iter1 - from.begin();
		cnt += min(abs(from[j] - to), abs(to - from[j - 1]));
	}
	cout << cnt << endl;
	return 0;
}
