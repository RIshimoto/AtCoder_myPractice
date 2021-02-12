#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
#define MAX 200100
using namespace std;
typedef long long ll;

vector<ll> sum(MAX, 0);
int s[MAX], t[MAX];
signed main(void)
{
	int n;
	cin >> n;

	rep(i, n) 
	{
		cin >> s[i] >> t[i];
		sum[s[i]] += 1;
	}
	rep(i, MAX - 1) sum[i + 1] += sum[i];
	rep(i, n)
	{
		cout << sum[t[i]] - sum[s[i]] << endl;
	}
	return 0;
}
