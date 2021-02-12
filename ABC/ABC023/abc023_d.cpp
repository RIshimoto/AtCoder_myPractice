#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

ll n;
vector<ll> H, S;
bool is_ok(ll mid)
{
	ll t;
	vector<ll> v;

	rep(i, n)
	{
		t = (mid - H[i] + S[i]) / S[i] - 1;
		v.push_back(t);
	}
	sort(v.begin(), v.end());
	rep(i, n)
	{
		if (v[i] < i)
			return (false);
	}
	return (true);
}

signed main(void)
{
	ll left, right, mid;

	cin >> n;
	left = right = 0;
	H.resize(n);
	S.resize(n);
	rep(i, n) 
	{
		cin >> H[i] >> S[i];
		right = max(right, (ll)H[i] + (n - 1) * S[i]);
	}
	while (right - left > 1)
	{
		mid = (left + right) / 2;
		if (is_ok(mid))
			right = mid;
		else
			left = mid;
	}
	cout << right << endl;
	return 0;
}
