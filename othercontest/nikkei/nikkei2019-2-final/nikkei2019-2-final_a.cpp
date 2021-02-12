#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n; 
	long long cnt, cnt_l, cnt_r;
	cin >> n;
	int a[n];
	rep(i, n) cin >> a[i];
	cnt = 0;
	for(int j = 1; j < n - 1; j++)
	{
		cnt_l = cnt_r = 0;
		rep(l, j) 
		{
			if (a[l] < a[j])
				cnt_l++;
		}
		for(int r = j + 1; r < n; r++)
		{
			if (a[j] > a[r])
				cnt_r++;
		}
		cnt += cnt_l * cnt_r;
	}
	cout << cnt << endl;
	return 0;
}
