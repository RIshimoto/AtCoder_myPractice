#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < (n); i++)
const long long INF = 1LL << 60;
using namespace std;

signed main(void)
{
	long long *array;
	long long n,m; cin >> n >> m;
	long long mini;
	long long sum;

	sum = 0;
	array = (long long *)malloc(sizeof(long long) * 100100);
	rep(i, 100100) array[i] = 0;
	rep(i,n)
	{
		long long l,r,s; 
		cin >> l >> r >> s;
		array[l] += s;
		array[r + 1] += (-1) * s;
		sum += s;
	}
	mini = array[1];
	for(long long i = 1; i < m; i++) 
	{
		array[i + 1] += array[i];
		mini = min(mini, array[i]);
	}
	cout << sum - mini << endl;
	return 0;
}
