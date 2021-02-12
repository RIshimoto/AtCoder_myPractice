#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	string s; cin >> s;
	string ans;
	char tmp;
	string subStr;
	int cnt;

	cnt = 0;
	tmp = s[0];
	for(const char c : s)
	{
		if (c == tmp)
			cnt++;
		else
		{
			subStr += tmp + to_string(cnt);
			ans += subStr;
			subStr.clear();
			tmp = c;
			cnt = 1;
		}
	}
	ans += tmp + to_string(cnt);
	cout << ans << endl;
}
