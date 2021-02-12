#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, k;
	cin >> n >> k;
	vector<string> vec(n);
	rep(i, n) cin >> vec[i];
	sort(vec.rbegin(), vec.rend());
	rep(i, n)
		cout << vec[i];
	cout << endl;
	return 0;
}
