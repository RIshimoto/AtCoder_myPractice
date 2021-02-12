#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;
typedef long long ll;

signed main(void)
{
	int n, mn, mx;
	cin >> n;
	int a[n], b[n];
	vector<int> A, B;

	rep(i, n) cin >> a[i] >> b[i];
	rep(i, n)
	{
		A.push_back(a[i]);
		B.push_back(b[i]);
	}
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	if (n % 2 == 0)
	{
		mn = floor((double)(A[n / 2] + A[n / 2 - 1]) / 2);
		mx = ceil((double)(B[n / 2] + B[n / 2 - 1]) / 2);
	}
	else
	{
		mn = A[n / 2];
		mx = B[n / 2];
	}
	cout << mx - mn + 1 << endl;
	return 0;
}
