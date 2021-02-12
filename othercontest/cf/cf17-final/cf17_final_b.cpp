#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0;i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	vector<int> cnt(3, 0);

	cin >> s;
	rep(i, s.size()) cnt[s[i] - 'a']++;
	sort(cnt.begin(), cnt.end());
	if (cnt[2] - cnt[0] <= 1)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
	return 0;
}
