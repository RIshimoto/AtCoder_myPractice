#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int n, cnt;

	cin >> n;
	cnt = 0;
	for(int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (s == "Takahashikun" || s == "Takahashikun.")
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}
