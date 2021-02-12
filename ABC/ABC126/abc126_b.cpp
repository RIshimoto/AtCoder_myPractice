#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	cin >> s;
	int a, b;
	a = (s[0] - '0') * 10 + (s[1] - '0');
	b = (s[2] - '0') * 10 + (s[3] - '0');
	if ((a == 0 || a > 12) && (b == 0 || b > 12))
		cout << "NA" << endl;
	else if (a > 12 && b <= 12 || a == 0)
		cout << "YYMM" << endl;
	else if (a <= 12 && b > 12 || b == 0)
		cout << "MMYY" << endl;
	else if (a <= 12 && b <= 12)
		cout << "AMBIGUOUS" << endl;
	return 0;
}
