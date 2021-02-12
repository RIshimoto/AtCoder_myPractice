#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
typedef long long ll;
using P=pair<int, int>;

signed main(void)
{
	int n, m, k;
	char c;
	cin >> n >> m >> k;
	vector<vector<int>>	J(n + 1, vector<int>(m + 1, 0));
	vector<vector<int>>	O(n + 1, vector<int>(m + 1, 0));
	vector<vector<int>>	I(n + 1, vector<int>(m + 1, 0));
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			cin >> c;
			if (c == 'J')
				J[i][j]++;
			else if (c == 'O')
				O[i][j]++;
			else if (c == 'I')
				I[i][j]++;
		}
	}
	rep(i, n) rep(j, m) 
	{
		J[i + 1][j + 1] += J[i][j + 1] + J[i + 1][j] - J[i][j];
		O[i + 1][j + 1] += O[i][j + 1] + O[i + 1][j] - O[i][j];
		I[i + 1][j + 1] += I[i][j + 1] + I[i + 1][j] - I[i][j];
	}
	rep(i, k)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		cout << J[c][d] - J[c][b - 1] - J[a - 1][d] + J[a - 1][b - 1] << " ";
		cout << O[c][d] - O[c][b - 1] - O[a - 1][d] + O[a - 1][b - 1] << " ";
		cout << I[c][d] - I[c][b - 1] - I[a - 1][d] + I[a - 1][b - 1] << endl;
	}
	return 0;
}
