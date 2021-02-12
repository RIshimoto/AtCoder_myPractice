#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	long long k, cnt, cnt_loop;
	cin >> n >> k;
	int a[n], label[n];
	int pre, tmp;
	vector<bool> visit(n, false);
	vector<int> ans;

	rep(i, n) 
	{
		cin >> a[i];
		a[i]--;
	}
	queue<int> que;
	que.push(a[0]);
	pre = -1;
	cnt = 1;
	label[0] = cnt;
	visit[0] = true;
	while(true)
	{
		int now = que.front();
		que.pop();
		if (visit[now])
		{
			cnt_loop = label[pre] - label[now] + 1;
			tmp = now;
			break;
		}
		if (cnt >= k)
		{
			cout << now + 1 << endl;
			return 0;
		}
		cnt++;
		label[now] = cnt;
		visit[now] = true;
		que.push(a[now]);
		pre = now;
	}
	ans.push_back(tmp + 1);
	rep(i, cnt_loop - 1)
	{
		int now = a[tmp];
		tmp = now;
		ans.push_back(tmp + 1);
	}
	k -= (cnt - cnt_loop);
	k %= cnt_loop;
	cout << ans[k] << endl;
	return 0;
}
