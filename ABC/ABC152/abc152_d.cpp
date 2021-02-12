#include <bits/stdc++.h>
#define For(i, a, b) for(int i = (a); i < (b); i++)
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

typedef pair<int, int> P;

P f(int x)
{
	int a = x % 10;
	int b = 0;
	while (x)
	{
		b = x;
		x /= 10;
	}
	return P(a, b);
}
signed main(void)
{
	int n;
	map<P, int> freq;
	long long ans;

	cin >> n;
	For(i, 1, n + 1)
	{
		P p = f(i);
		freq[p]++;
	}
	ans = 0;
	For (i, 1, n + 1)
	{
		P p = f(i);
		P q(p.second, p.first);
		ans += freq[q];
	}
	cout << ans << endl;
	return 0;
}
