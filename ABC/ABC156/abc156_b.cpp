#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n, k; cin >> n >> k;
	int cnt;

	cnt = 0;
	while (n > 0)
	{
		cnt++;
		n /= k;
	}
	cout << cnt << endl;
	return 0;
}
