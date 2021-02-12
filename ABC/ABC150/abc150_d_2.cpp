#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
const int MAX_N = 10010;
const int MAX_A = 10000100;

vector<ll> l(MAX_A, 0); 
void f(ll n)
{
	ll x = n;
	for(ll i = 2; i * i <= n; i++)
	{
		ll cnt = 0;
		while (x % i == 0)
		{
			cnt++;
			x /= i;
		}
		l[i] = max(l[i], cnt);
	}
	if (x != 1){
		l[x] = max(l[x], 1ll); 
	}
}

signed main(void)
{
	int n, m;
	ll L;
	cin >> n >> m;
	ll a, prek, k;
	set<int> st;
	
	prek = -1;
	rep(i, n){ cin >> a; cout << "in" <<< endl;}
		/*
	rep(i, n)
	{
		cin >> a;
		cout << n << " " << i << " "; 
		cout << a << endl;
		if (st.count(a))
		{
			cout << "in" << endl;
		}
		st.insert(a);
		k = 0;
		while (a % 2 == 0){
			a /= 2;
			k++;
		}
		if (prek != -1 && k != prek){
			cout << 0 << endl;
			return 0;
		}
		f(a);
		prek = k;
		*/
//	}
	/*
	rep(i, k - 1) m /= 2;
	L = 1;
	for (int i = 2; i < MAX_A; i++){
		L *= pow(i, l[i]);
		if (L > m){
			cout << 0 << endl;
			return 0;
		}
	}
	cout << "L : " << L << endl;
	int cnt = 0;
	for (int i = 1; i * L <= m; i+=2)
		cnt++;
	cout << cnt << endl;
	*/
	return 0;
}
