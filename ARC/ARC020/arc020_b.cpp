#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, c;
	cin >> n >> c;
	int a[n];
	long long ans;
	map<int, int> mp, sp;
	rep(i, n) cin >> a[i];
	rep(i, n)
	{
		if (i % 2 == 0)
			mp[a[i]]++;
		else
			sp[a[i]]++;
	}
	int mx_mp_k, mx_mp_v, sec_mp_k, sec_mp_v;
	int mx_sp_k, mx_sp_v, sec_sp_k, sec_sp_v;
	mx_mp_v = sec_mp_v = 0;
	mx_mp_k = sec_mp_k = 0;
	for(auto p : mp)
	{
		auto k = p.first;
		auto v = p.second;
		if (mx_mp_v < v)
		{
			sec_mp_v = mx_mp_v;
			mx_mp_v = v;
			sec_mp_k = mx_mp_k;
			mx_mp_k = k;
		}
		else if (sec_mp_v < v)
		{
			sec_mp_v = v; 
			sec_mp_k = k; 
		}
	}
	mx_sp_v = sec_sp_v = 0;
	mx_sp_k = sec_sp_k = 0;
	for(auto p : sp)
	{
		auto k = p.first;
		auto v = p.second;
		if (mx_sp_v < v)
		{
			sec_sp_v = mx_sp_v;
			mx_sp_v = v;
			sec_sp_k = mx_sp_k;
			mx_sp_k = k;
		}
		else if (sec_sp_v < v)
		{
			sec_sp_v = v; 
			sec_sp_k = k; 
		}
	}
	ans = 1e9;
	if (mx_mp_k != mx_sp_k)
		ans = (n - mx_mp_v - mx_sp_v) * c;
	else
	{
		if (sec_mp_k == 0 && sec_sp_k == 0)
			ans = min(mx_mp_v, mx_sp_v) * c;
		else if (sec_mp_k == 0)
			ans = (sp.size() - sec_sp_v) * c;
		else if (sec_sp_k == 0)
			ans = (mp.size() - sec_mp_v)* c;
		else
			ans = (n - max(mx_mp_v + sec_sp_v, sec_mp_v + mx_sp_v)) * c;
	}
	cout << ans << endl;
	return 0;
}
