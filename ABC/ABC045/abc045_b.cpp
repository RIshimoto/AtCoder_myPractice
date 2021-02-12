#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string a, b, c;
	int i, j, k;
	char turn;
	bool ok_a, ok_b, ok_c;
	cin >> a >> b >> c;
	turn = 'a';
	i = j = k = 0;
	ok_a = ok_b = ok_c = false;
	while (true)
	{
		if (turn == 'a')
		{
			if (i >= a.size()) {ok_a = true; break;}
			turn = a[i];
			i++;
		}
		else if (turn == 'b')
		{
			if (j >= b.size()) {ok_b = true; break;}
			turn = b[j];
			j++;
		}
		else if (turn == 'c')
		{
			if (k >= c.size()) {ok_c = true; break;}
			turn = c[k];
			k++;
		}
	}
	if (ok_a)
		cout << 'A' << endl;
	else if (ok_b)
		cout << 'B' << endl;
	else if (ok_c)
		cout << 'C' << endl;
	return 0;
}
