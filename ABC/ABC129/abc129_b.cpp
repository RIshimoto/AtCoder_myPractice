#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int n; cin >> n;
	int w[n], sum, s1, s2, ans;

	sum = 0;
	for(int i = 0; i < n; i++) 
	{
		cin >> w[i];
		sum += w[i];
	}
	ans = 1000000000;
	for(int i = 0; i < n; i++)
	{
		s1 = 0;
		for(int j = 0; j <= i; j++)
			s1 += w[j];
		s2 = sum - s1;
		ans = min(ans, abs(s2-s1));
	}
	cout << ans << endl;
}
