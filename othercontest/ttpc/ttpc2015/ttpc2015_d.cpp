#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define MAX 1e5
using namespace std;
using P = pair<int, int>;
typedef long long ll;

bool isPrime(ll n)
{
	for (int i = 2; i <= sqrt(n); i++) 
	{
		if (n % i == 0)
			return false;
	}
	return true;
}	

string s;
int prime[] = {1, 3, 5, 7, 9};
vector<char> mp;
vector<int> ctoi(256, -1);
bool flag[5];
ll ans = -1;

ll f(void)
{
	ll num;

	num = 0;
	rep(i, s.size())
		num = num * 10 + ctoi[s[i]];
	if (isPrime(num))
		return num;
	return -1;
}

void dfs(int i)
{
	rep(j, 5)
	{
		if (!flag[j])
		{
			ctoi[mp[i]] = prime[j];
			if (i == mp.size() - 1)
			{
				ll tmp = f();
				if (tmp != -1)
					ans = tmp;
			}
			else
			{
				flag[j] = true;
				dfs(i + 1);
				flag[j] = false;
			}
		}
	}
}

signed main(void)
{
	cin >> s;
	rep(i, s.size())
	{
		if (count(mp.begin(), mp.end(), s[i]) < 1) 
			mp.push_back(s[i]);
	}
	if (mp.size() <= 5)
		dfs(0);
	cout << ans << endl;
	return 0;
}
