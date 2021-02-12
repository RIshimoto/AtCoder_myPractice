#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	string s;
	int ans_i, ans_j;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'A')
		{
			ans_i = i;
			break;
		}
	}
	for (int i = s.size() - 1; i >= 0; i--)
	{
		if (s[i] == 'Z')
		{
			ans_j = i;
			break;
		}
	}
	cout << ans_j - ans_i + 1 << endl;
	return 0;
}
