#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	ll n, sum;
	cin >> n;
	sum = 0;
	for(ll i = 1; i < sqrt(n); i++)
	{
		if (n % i == 0)
		{	
			sum += i;
			sum += n / i;
		}
	}
	if (n + n > sum)
		cout << "Deficient" << endl;
	else if (n + n == sum)
		cout << "Perfect" << endl;
	else if (n + n < sum)
		cout << "Abundant" << endl;
	return 0;
}
