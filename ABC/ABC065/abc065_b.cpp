#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, x;
	long long cnt;
	cin >> n;
	vector<int> a(n);
	bool visited[n];

	rep(i, n)
	{
		cin >> a.at(i);
		a.at(i)--;
		visited[i] = false;
	}
	x = a[0];
	visited[0] = true;
	cnt = 1;
	rep(i, n)
	{
		if (x == 1)
		{
			cout << cnt << endl;
			break;
		}
		x = a[x];
		cnt++;
		if (visited[x])
		{
			cout << -1 << endl;
			break;
		}
		visited[x] = true;
	}
	return 0;
}
