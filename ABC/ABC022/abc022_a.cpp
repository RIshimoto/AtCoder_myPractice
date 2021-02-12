#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(void)
{
	int n; cin >> n;
	int s,t; cin >> s >> t;
	int w; cin >> w;
	int cnt;

	cnt = 0;
	if (w >= s && w <= t) cnt++;
	rep(i, n - 1) 
	{
		int a;
		cin >> a;
		w += a;
		if (w >= s && w <= t) cnt++;
	}
	cout << cnt << endl;
}
