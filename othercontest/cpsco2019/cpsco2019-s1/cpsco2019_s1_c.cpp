#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
const int INF = 1e9;

int check(int n)
{
	int cnt = 0;
	while(n)
	{
		int x = n % 10;
		cnt += x / 5 + x % 5;
		n /= 10;
	}
	return cnt;
}

int a[35];
int n, k, ans;
void dfs(int j, int cnt = 1, int sum = 0)
{
	while (j < n)
	{
		sum += a[j];
		if (k == cnt) 
			ans = min(ans, check(sum));
		else
			dfs(j + 1, cnt + 1, sum);
		sum -= a[j];
		j++;
	}
}

signed main(void)
{
	cin >> n >> k;
	rep(i, n) cin >> a[i];
	ans = 1e9;
	dfs(0);
	cout << ans << endl;
	return 0;
}
