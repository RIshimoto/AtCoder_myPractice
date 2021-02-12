#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;

signed main(void)
{
	int n;
	vector<int> chan(10);
	vector<P> v;

	rep(i, 10)
	{
		int a;
		cin >> a;
		chan[a] = i;
	}
	cin >> n;
	rep(i, n)
	{
		ll tmp, a, x, r;
		cin >> a;
		x = a;
		r = tmp = 0;
		while (x)
		{
			int c = chan[x % 10];
			rep(i, r) c *= 10;
			tmp += c;
			x /= 10;
			r++;
		}
		v.push_back(P(tmp, a));
	}	
	sort(v.begin(), v.end());
	rep(i, n)
	{
		cout << v[i].second << endl;
	}
	return 0;
}
