#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n; 
	long long k, cnt;
	cin >> n >> k;
	int a[n];
	long long sum[n];
	rep(i, n) 
	{
		cin >> a[i];
		sum[i] = a[i];
	}
	rep(i, n - 1) sum[i + 1] += sum[i];
	cnt = 0;
	for(int i = n - 1; i >= 0; i--)
	{
		if (sum[i] < k)
			break;
		else
		{
			cnt++;
			for(int j = i - 1; j >= 0; j--)	
			{
				if (sum[i] - sum[j] >= k)
				{
					cnt += j + 1;
					break;
				}
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
