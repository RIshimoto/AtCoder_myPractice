#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	ll n, a, b;
	cin >> n >> a >> b;
	vector<ll> vec;
	rep(i, b) 
	{
		ll d;
		cin >> d;
		vec.push_back(d);
	}
	vec.push_back(n + 1);
	vec.push_back(0);
	sort(vec.begin(), vec.end());
	n -= b;
	rep(i, vec.size() - 1)
	{
		n -= (vec[i + 1] - vec[i] - 1) / a;
	}
	cout << n << endl;
	return 0;
}
