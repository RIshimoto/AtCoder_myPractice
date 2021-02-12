#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n, p, l, r;
	ll seki;
	vector<int> a;

	cin >> n >> p;
	rep(i, n) 
	{
		int b;
		cin >> b;
		if (b == 1 && a.size() >= 1 && a[a.size() - 1] == 1)
			continue;
		a.push_back(b);
	}
	l = r = 0;
	seki = 1;
	while (l < a.size())
	{
		if (seki < p)
		{
			if (r >= a.size())
				break;
			seki *= a[r];
			r++;
		}
		else if (seki > p)
		{
			seki /= a[l];
			l++;
		}
		else
		{
			cout << "Yay!" << endl;
			return 0;
		}
	}
	cout << ":(" << endl;
	return 0;
}
