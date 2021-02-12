#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int A, B, C;
int dfs(int a, int b, int c, int n)
{
	int cnt = 0;
	if (a > A || b > B || c > C) return 0;
	if (a < b || b < c) return 0;
	if (n == 0) return 1;
	cnt += dfs(a + 1, b, c, n - 1);
	cnt += dfs(a, b + 1, c, n - 1);
	cnt += dfs(a, b, c + 1, n - 1);
	return cnt;
}
signed main(void)
{
	cin >> A >> B >> C;	
	cout <<	dfs(0, 0, 0, A + B + C) << endl;
	return 0;
}
