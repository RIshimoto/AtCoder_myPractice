#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, ans, cnt;
	string s;
	char tab[] = "ABXY";
	vector<string> v;

	cin >> n >> s;
	rep(i, 4) rep(j, 4)
	{
		string tmp = "";
		tmp += tab[i];
		tmp += tab[j];
		v.push_back(tmp);
	}
	ans = 1e9;
	rep(i, v.size() - 1)
	{
		for(int j = i + 1; j < v.size(); j++)
		{
			cnt = 0;
			rep(k, n)
			{
				cnt++;
				if (s.substr(k, 2) == v[i] || s.substr(k, 2) == v[j])
					k++;
			}
			ans = min(cnt, ans);
		}
	}
	cout << ans << endl; 
	return 0;
}
