#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long n, k;
	long long sum;
	vector<long long> h;

	sum = 0;
	cin >> n >> k;
	rep(i, n) {long long a; cin >> a; h.push_back(a);}
	sort(h.begin(), h.end());
	reverse(h.begin(), h.end());
	for (long long i = k; i < n; i++)
		sum += h.at(i);
	cout << sum << endl;
	return 0;
}
