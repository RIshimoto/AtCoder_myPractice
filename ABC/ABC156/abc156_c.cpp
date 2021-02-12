#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(void)
{
	int n; cin >> n;
	int x[n]; rep(i, n) cin >> x[i];
	int sum, ans;

	ans = (int)1e9;
	rep(i, 100) 
	{
		sum = 0;
		rep(j, n)
			sum += (x[j] - (i + 1)) * (x[j] - (i + 1));
		ans = min(ans, sum);
	}
	cout << ans << endl;
	return 0;
}
