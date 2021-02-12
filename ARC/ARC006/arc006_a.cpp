#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	set<int> s, m;
	int b, cnt, ans;

	rep(i, 6)
	{
		int e;
		cin >> e;
		s.insert(e);
	}
	cin >> b;	
	cnt = 0;
	rep(i, 6)
	{
		int l;
		cin >> l;
		m.insert(l);
		if (s.count(l))
			cnt++;
	}
	switch(cnt)
	{
		case 6:
			ans = 1;
			break;
		case 5:
			if (m.count(b))
				ans = 2;
			else
				ans = 3;
			break;
		case 4:
			ans = 4;
			break;
		case 3:
			ans = 5;
			break;
		default:
			ans = 0;
			break;
	}
	cout << ans << endl;
	return 0;
}
