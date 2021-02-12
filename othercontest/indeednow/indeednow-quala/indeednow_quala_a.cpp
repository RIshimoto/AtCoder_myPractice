#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int keta(int x)
{
	int cnt = 0;
	while(x)
	{
		x /= 10;
		cnt++;
	}
	return cnt;
}
signed main(void)
{
	int a, b;
	cin >> a >> b;
	cout << keta(a) * keta(b) << endl;
}
