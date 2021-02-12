#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1e18;

signed main(void)
{
	int N, M;
	int ans;
	cin >> N >> M;
	vector<int> H(N), W(M);
	vector<int> sum1((N + 1) / 2), sum2((N + 1) / 2);

	rep(i, N) cin >> H[i];
	rep(i, M) cin >> W[i];
	sort(H.begin(), H.end());
    for(int i = 0; i < N - 1; i += 2) 
		sum1[i / 2 + 1] = sum1[i / 2] + H[i + 1] - H[i];
    for(int i = N - 2; i > 0; i -= 2) 
		sum2[i / 2] = sum2[i / 2 + 1] + H[i + 1] - H[i];
	ans = INF;
	for (auto x : W)
	{
		cout << "x : " << x << endl;
		auto p = lower_bound(H.begin(), H.end(), x);
		int i = p - H.begin();
		ans = min(ans, x - H[i] + sum1[(N + 1) / 2 - i] + sum1[(N + 1) / 2 - i]);
	}
	return 0;
}
