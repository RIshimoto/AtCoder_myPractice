#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
#define ALL(a) (a).begin(),(a).end() 
using namespace std;
typedef long long ll;

signed main(void)
{
	int n, c, cnt, tmp;
	vector<int> l;

	cin >> n >> c;
	rep(i, n) 
	{
		int a;
		cin >> a;
		l.push_back(a);
	}
	sort(l.begin(), l.end());
	cnt = 0;
	rep(i, l.size())
	{
		tmp = c - l[i] - 1;
		int lo, hi;
		lo = 0; hi = l.size();
		while(hi - lo > 1)
		{
			int mid = (lo + hi) / 2;
			if (l[mid] <= tmp)
				lo = mid;
			else
				hi = mid;
		}
		if (lo != i)
			l.erase(l.begin() + lo);
		l.erase(l.begin());
		cnt++;
		i = -1;
	}
	cout << cnt << endl;
	return 0;
}
