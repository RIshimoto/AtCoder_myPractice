#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int n; cin >> n;
	int ans;

	ans = 0;
	ans += n / 10;
	ans += n % 10;
	cout << ans << endl;
	return 0;
}
