#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(void)
{
	string s;
	int cnt;
	cin >> s;
	cnt = 0;
	rep(i, s.size())
	{
		if (s[i] == 'o')
			cnt++;
	}
	if (15 - s.size() + cnt >= 8)
		cout << "YES" << endl; 
	else
		cout << "NO" << endl;
	return 0;
}
