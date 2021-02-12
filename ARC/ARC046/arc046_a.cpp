#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m, ans;
	cin >> n;
	queue<int> que;
	for(int i = 1; i < 10; i++)
	{
		que.push(i);
		n--;
		if (n == 0)
		{
			cout << i << endl;
			return 0;
		}
	}
	rep(i, n)
	{
		m = que.front();
		que.pop();
		ans = m * 10 + m % 10;
		que.push(ans);
	}
	cout << ans << endl;
	return 0;
}
