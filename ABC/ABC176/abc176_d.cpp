#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0;  i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<int, int>;

signed main(void)
{
	int h, w, c1, c2, d1, d2;
	cin >> h >> w >> c1 >> c2 >> d1 >> d2;
	string s[h];
	queue<P> que;

	rep(i, h) cin >> s[i];
	while (!que.empty())
	{
		P p = que.pop();
		int x = p.first;
		int y = p.second;
		if (s[x][y] == '.')
			que.push(
	}
	return 0;
}
