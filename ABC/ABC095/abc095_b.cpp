#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, x, cnt;
	cin >> n >> x;
	vector<int> m(n);
	cnt = 0;	
	rep(i, n)
	{
		cin >> m.at(i);
		x -= m.at(i);
		cnt++;
	}
	sort(m.begin(), m.end());
	cnt += x / m[0];
	cout << cnt << endl;
	return 0;
}
