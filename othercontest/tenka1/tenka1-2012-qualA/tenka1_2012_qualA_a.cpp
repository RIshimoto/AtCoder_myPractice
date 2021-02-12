#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i <= (n); i++)
using namespace std;

int a[46];
int f(int n)
{
	if (n <= 1) return 1;
	if (a[n] != -1) return a[n];
	return a[n] = f(n - 1) + f(n - 2);
}
signed main(void)
{
	int n;
	long long ans;
	cin >> n;
	rep(i, n) a[i] = -1;
	cout << f(n) << endl;
	return 0;
}
