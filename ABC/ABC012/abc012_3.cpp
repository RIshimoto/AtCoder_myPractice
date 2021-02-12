#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i < (n); i++)
using namespace std;

int main(void)
{
	int n; cin >> n;
	int m;
	int sum;

	sum = 0;
	rep(i, 10)rep(j, 10) sum += i * j; 
	m = sum - n;
	rep(i, 10)
		rep(j, 10)
			if (i * j == m)
				cout << i << " x " << j << endl; 
	return 0;
}
