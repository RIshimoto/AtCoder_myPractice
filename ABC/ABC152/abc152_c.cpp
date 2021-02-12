#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

int main(void)
{
	int n;
	int ans; 
	int a[200010];
	int mini;

	cin >> n;
	ans = 0;
	rep(i, n) cin >> a[i];
	mini = a[0];
	rep(i, n)
	{
		if (mini >= a[i])
		{
			ans++;
			mini = a[i];
		}
	}
	cout << ans << endl;
}
