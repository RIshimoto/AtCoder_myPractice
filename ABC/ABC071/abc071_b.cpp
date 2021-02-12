#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i <(n); i++)
using namespace std;

signed main(void)
{
	int i, j;
	string s, diff;

	cin >> s;
	diff = "abcdefghijklmnopqrstuvwxyz";
	sort(s.begin(), s.end());
	i = j = 0;
	if (diff[i] < s[j])
	{
		cout << diff[i] << endl;
		return 0;
	}
	while (j < s.size())
	{
		while (s[j] == diff[i]) j++;
		i++;
		if (diff[i] < s[j] || (j >= s.size() && i < diff.size()))
		{
			cout << diff[i] << endl;
			return 0;
		}
	}
	cout << "None" << endl;
	return 0;
}
