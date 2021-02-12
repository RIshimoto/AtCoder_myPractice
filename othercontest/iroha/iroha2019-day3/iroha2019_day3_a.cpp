#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int a[26];
	rep(i, 26) cin >> a[i];
	cout << a[0] - a[1] << endl;
	cout << a[2] + a[3] << endl;
	cout << max(a[5] - a[4] + 1, 0) << endl;
	cout << (a[6] + a[7] + a[8]) / 3 + 1 << endl;

	vector<string> ans_5;
	ans_5.push_back("a");
	ans_5.push_back("aa");
	ans_5.push_back("aaa");
	ans_5.push_back("aaai");
	ans_5.push_back("aaaji");
	ans_5.push_back("aabaji");
	ans_5.push_back("agabaji");
	ans_5.push_back("dagabaji");
	cout << ans_5[a[9] - 1] << endl;

	ll ans_6, ans_7;
	vector<ll> out;
	rep(n, 61 * 59)
	{
		if (n % 59 == a[10] && n % 61 == a[11]) 
		{
			ans_6 = n;
			break;
		}
	}
	ans_6 += 59 * 61 * (a[12] - 1);

	int b[] = {6, 28, 496, 8128};
	rep(i, 4)
	{
		if (abs(b[i] - ans_6) >= a[13])
		{
			ans_7 = b[i];
			break;
		}
	}
	if (ans_6 > ans_7) swap(ans_6, ans_7);
	cout << ans_6 << endl;
	cout << ans_7 << endl;

	int ans_8 = 1;
	for(int i = 14; i <= 23; i += 3)
	{
		ans_8 *= (a[i] + a[i + 1] + a[i + 2]) % 9973;
		ans_8 %= 9973;
	}
	if (ans_8 < 0) ans_8 += 9973;
	cout << ans_8 << endl;
	return 0;
}
