#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int check(string u)
{
	for (int i = 0; i < u.size(); i+=2)
	{
		if (u[i] == '0')
			return (0);
	}
	return (1);
}

signed main(void)
{
	string s, t;
	int i, n, ans;

	cin >> s;
	n = s.size();
	ans = 0;
	i = 0;
	while (i < n)
	{
		if (s[i] == '+')
		{
			ans += check(t);
			t = "";
		}
		else
			t += s[i];
		i++;
	}
	ans += check(t);
	cout << ans << endl;
	return 0;
}
