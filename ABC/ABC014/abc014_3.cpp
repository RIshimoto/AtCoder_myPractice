#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
#define MAX_N 1000000 
using namespace std;

int main(void)
{
	int n; cin >> n;
	int *imos;
	imos = (int *)malloc(sizeof(int) * (MAX_N + 1));
	rep(i, MAX_N + 1) imos[i] = 0;
	rep(i, n)
	{
		int a,b;
		cin >> a >> b;
		imos[a]++;
		imos[b + 1]--;
	}
	int ans;
	ans = imos[0]; 
	for(int i = 1; i <= MAX_N; i++)
	{
		imos[i] += imos[i - 1];
		ans = max(ans, imos[i]);
	}
	cout << ans << endl;
	return 0;
}
