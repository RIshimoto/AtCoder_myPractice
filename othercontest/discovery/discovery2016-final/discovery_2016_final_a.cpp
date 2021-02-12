#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin  >> n;
	vector<int> vec(n);
	rep(i, n)
	{
		int a;
		cin >> a;
		a--;
		switch (i + 1)
		{
		case 1:
			vec[a] = 100000;
			break;
		case 2:
			vec[a] = 50000;
			break;
		case 3:
			vec[a] = 30000;
			break;
		case 4:
			vec[a] = 20000;
			break;
		case 5:
			vec[a] = 10000;
			break;
		default:
			vec[a] = 0;
			break;
		}
	}
	rep(i, n)
	{
		cout << vec[i] << endl;
	}
	return 0;
}
