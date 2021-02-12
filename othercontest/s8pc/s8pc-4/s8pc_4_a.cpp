#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	char alpha[26];
	string s[n], t;
	set<int> out;
	bool flag;

	rep(i, n) cin >> s[i];
	cin >> t;
	rep(i, 26) alpha[i] = 'a' + i;
	rep(j, n)
	{
		int cnt, dob;
		cnt = 1;
		dob = 0;
		string tmp = s[j];
		rep(i, 26)
		{
			rep(k, tmp.size())
			{
				if (tmp[k] == '?')
					tmp[k] = alpha[i]; 
			}
			if (tmp < t)
				cnt++;
			else if (tmp == t)
				dob++;
		}
		out.insert(cnt);
		rep(j, dob)
		{
			cnt++;
			out.insert(cnt + 1);
		}
	}
	for(auto st : out)
		cout << st << endl;
	return 0;
}
