#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long n, a, b, sum;
	double p, q, ave;

	cin >> n >> a >> b;
	vector<int> s(n);
	sum = 0;
	rep(i, n) 
	{
		cin >> s[i];
		sum += s[i];
	}
	sort(s.begin(), s.end());
	ave = (double) sum / n;
	if (s[n - 1] - s[0] == 0)
	{
		cout << -1 << endl;
		return 0;
	}
	p = (double) b / (s[n - 1] - s[0]);
	q = (double) a - p * ave;
	cout << fixed << setprecision(20) << p << " " << q << endl;
	return 0;
}
