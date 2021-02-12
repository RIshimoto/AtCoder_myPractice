#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m, x;
	cin >> n >> m >> x;
	int tab[n + 1];
	rep(i, n + 1) tab[i] = 0;
	rep(i, m) 
	{
		int a;
		cin >> a;
		tab[a]++;
	}
	for(int i = x; i < n; i++) tab[i + 1] += tab[i];
	for(int i = x; i > 0; i--) tab[i - 1] += tab[i];
	cout << min(tab[n], tab[0]) << endl;
	return 0;	
}
