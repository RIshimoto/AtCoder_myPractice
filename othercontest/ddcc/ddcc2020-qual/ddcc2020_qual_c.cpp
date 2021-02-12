#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int h, w, k, cnt;
	cin >> h >> w >> k;
	int sum[h], ans[h][w];
	string s[h];

	rep(i, h)
	{
		cin >> s[i];
		sum[i] = 0;
	}
	rep(i, h) rep(j, w)
	{
		if (s[i][j] == '#') sum[i]++;
	}
	
	vector<int> vec;
	// ‰¡‚ÉØ‚é
	rep(i, h)
	{
		if (sum[i] >= 1)
			vec.push_back(i);
	}
	// c‚ÉØ‚é
	int tmp_l, tmp_r;
	cnt = 0;
	tmp_l = 0;
	rep(i, vec.size())
	{
		tmp_r = 0;
		rep(j, w)
		{
			if (s[vec[i]][j] == '#' || j == w - 1)
			{
				if (s[vec[i]][j] == '#')
					cnt++;
				for(int m = tmp_l; m <= vec[i]; m++)
				for(int l = tmp_r; l <= j; l++)
					ans[m][l] = cnt; 
				if (i == vec.size() - 1 && vec[i] != h - 1)
				{
					for(int m = vec[i]; m < h; m++)
					for(int l = tmp_r; l <= j; l++)
						ans[m][l] = cnt; 
				}
				tmp_r = j + 1;
			}
		}
		tmp_l = vec[i] + 1;
	}
	rep(i, h) rep(j, w)
		printf("%d%c", ans[i][j], j==w-1?'\n':' ');
	return 0;
}
