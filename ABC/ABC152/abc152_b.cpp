#include <bits/stdc++.h>
#include <string.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(void)
{
	int a, b;
	string c, d;
	cin >> a >> b;

	rep(i, b) c += to_string(a);
	rep(i, a) d += to_string(b);
	cout << min(c, d) << endl;
	return 0;
}
