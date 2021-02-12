#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	vector<int> vec(6);
	rep(i, 6) cin >> vec[i];
	sort(vec.rbegin(), vec.rend());
	cout << vec[2] << endl;
	return 0;
}
