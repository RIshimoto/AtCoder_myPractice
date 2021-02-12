#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n; cin >> n;
	set<int> s;
	int cnt;

	cnt = 0;
	rep(i, n)
	{
		int a;
		cin >> a;
		if (s.count(a))
			cnt++;
		s.insert(a);
	}
	cout << cnt << endl;
	return 0;
}
