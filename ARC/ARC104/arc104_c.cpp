#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll=long long;
using P=pair<ll, ll>;

signed main(void)
{
	int n;
	set<int> st;
	cin >> n;
	P data[n];
	P p[n];
	rep(i, n)
	{
		int a, b;
		cin >> a >> b;
		st.insert(a);
		st.insert(b);
		data[i] = P(a, b);
		if (a == -1 && b != -1)
			a = b - 1;
		if (a != -1 && b == -1)
			b = a + 1;
		if (!(a == -1 && b == -1) && a >= b || a == 0)
		{
			cout << "No" << endl;
			return 0;
		}
		p[i] = P(a, b);
	}
	rep(i, n)
	{
		if (!(data[i].first == -1 && data[i].second == -1))
		{
			if (data[i].first == -1)
			{
				while (st.count(p[i].first))
					p[i].first--;
				st.insert(p[i].first);
			}
			else if (data[i].second == -1)
			{
				while (st.count(p[i].second))
					p[i].second++;
				st.insert(p[i].second);
			}
			if (p[i].first <= 0 || p[i].second > 2 * n)
			{
				cout << "No" << endl;
				return 0;
			}
		}
	}
	rep(i, n - 1)
	{
		int j = i + 1;
		if (p[i].second > p[j].first)
		{
			int c1 = p[i].second - p[i].first - 1;
			int c2 = p[j].second - p[j].first - 1;
			if (c1 != c2)
			{
				cout << "No" << endl;
				return 0;
			}
		}
	}
	cout << "Yes" << endl;
	return 0;
}
