#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	long long n, cnt, tmp_i;

	cin >> s;
	n = s.size();
	cnt = 0;
	tmp_i = 0;
	rep(i, n)
	{
		if (s[i] == '+')
		{
			set<char> st;
			for(int j = tmp_i; j < i; j++)
			{
				if (s[j] != '*')
					st.insert(s[j]);	
			}
			if (!st.count('0'))
				cnt++;
			tmp_i = i + 1;
		}
	}
	set<char> st;
	for (int i = tmp_i; i < n; i++)
	{
		if (s[i] != '*')
			st.insert(s[i]);
	}
	if (!st.count('0'))
		cnt++;
	cout << cnt << endl;
	return 0;
}
