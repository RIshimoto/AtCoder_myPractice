#include <bits/stdc++.h>
using namespace std;

int keta(int x)
{
	int cnt;

	cnt = 0;
	if (x < 10)
	{
		cnt++;
		return cnt;
	}
	cnt += keta(x / 10);
	cnt += keta(x % 10);
	return (cnt);
}

int main(void)
{
	int n;
	int cnt;
	cin >> n;

	cnt = 0;
	for (int i = 1; i <= n; i++)
		if (keta(i) % 2 != 0)
			cnt++;
	cout << cnt << endl;
	return 0;
}
