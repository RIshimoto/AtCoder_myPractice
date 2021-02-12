#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int cost, roop, n, m;
	vector<int> tmp;
	cin >> n >> m;
	roop = m - 1;
	rep(i, m)
	{
		int a, b;
		cin >> a >> b;
		if (n <= a)
			roop--;
		else
			tmp.push_back(n - a);
	}
	sort(tmp.begin(), tmp.end());
	cost = 0;
	rep(i, roop) cost += tmp[i];
	cout << cost << endl;
	return 0;
}
