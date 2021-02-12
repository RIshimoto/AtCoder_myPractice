#include <bits/stdc++.h>
#define FOR(i, a, b) for(long long i = (a); i <= (b); i++)
#define rep(i, n) for(long long i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

long long gcd(long long a, long long b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}

vector<pair<ll, int>> factarize(ll n)
{
	vector<pair<ll, int>> res;
	for(ll i = 2; i * i <= n; i++)
	{
		if (n % i) continue;
		res.emplace_back(i, 0);
		while (n % i == 0)
		{
			n /= i; 
			res.back().second++;
		}
	}
	if (n != 1) res.emplace_back(n, 1);
	return res;
}

signed main(void)
{
	long long a, b;
	vector<long long> v;
	cin >> a >> b;

	ll g = gcd(a, b);
	auto f = factarize(g);
	int ans = f.size() + 1;
	cout << ans << endl;
	return 0;
}
