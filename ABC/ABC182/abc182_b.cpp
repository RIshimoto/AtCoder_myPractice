#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P=pair<ll, ll>;
#define MAX 110

int gcd(int a, int b)
{
	if (b == 0) return a;
	return (gcd(b, a % b));
}

int a[MAX];
signed main(void)
{
	int n, ans, max, cnt;

	cin >> n;
	rep(i, n) cin>>a[i];
	max = 0;
	ans = -1;
	for (int g = 2; g <= 1000; g++)
	{
		cnt = 0;
		rep(i, n)
		{
			if (g == gcd(g, a[i]))
				cnt++;
		}
		if (max <= cnt) 
		{
			ans = g; 
			max = cnt;
		}
	}
	cout << ans << endl;
	return 0;
}
