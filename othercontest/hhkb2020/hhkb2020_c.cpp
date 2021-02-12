#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i <(n); i++)
using namespace std;
typedef long long ll;
using P=pair<ll, ll>;

signed main(void)
{
	int n;
	cin >> n;
	int p[n];
	rep(i, n) cin >> p[i];
	vector<bool> flag(n, false);
	int mn = 0;
	rep(i, n)
	{
		flag[p[i]] = true;
		while (flag[mn] == true && mn < n) 
			mn++;
		cout << mn << endl;
	}
	return (0);
}
