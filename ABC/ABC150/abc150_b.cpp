#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	int cnt;
	string s;

	cnt = 0;
	cin >> n >> s;
	for (int i = 0; i <= n - 3; i++)
		if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') cnt++;
	cout << cnt << endl;
	return 0;
}
