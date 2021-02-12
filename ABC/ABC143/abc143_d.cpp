#include <bits/stdc++.h>
#define For(i, a, b) for(int i = (a); i < (b); i++)
#define rep(i, n) For(i, 0, n)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	vector<int> L(n);
	rep(i, n) cin >> L[i];
	int cnt;
	
	cnt = 0;
	sort(L.begin(), L.end());
	rep(i, n - 2) For(j, i + 1, n - 1)
	{
		int ab = L[i] + L[j];
		int l = lower_bound(L.begin(), L.end(),ab) - L.begin();
		int r = j + 1;
		cnt += l - r;
	}
	cout << cnt << endl;
	return 0;
}
