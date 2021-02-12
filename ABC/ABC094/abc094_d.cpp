#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int N;
	cin >> N;
	int n, m, maxi;
	vector<int> a(N);

	rep(i, N) cin >> a[i];
	sort(a.rbegin(), a.rend());
	n = a[0];
	m = a[N - 1];
	maxi = a[N - 1];
	for(int i = 1; i < N; i++)
	{
		int tmp;
		tmp = min(n - a[i], a[i]);
		if (tmp > maxi)
		{
			maxi = tmp;
			m = a[i]; 
		}
	}
	cout << n << " " << m << endl;
	return 0;
}
