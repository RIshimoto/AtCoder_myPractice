#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, money;
	cin >> n;
	pair<char, int> p[n];
	money = 0;
	rep(i, n) cin >> p[i].first >> p[i].second;
	rep(i, n)
	{
		if (p[i].first == '+')
			money += p[i].second;
	}
	rep(i, n)
	{
		if (p[i].first == '*' && p[i].second != 0)
			money *= p[i].second;
	}
	cout << money << endl;
	return 0;
}
