#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int a,b; cin >> a >> b;
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
	cout << a << " " << b << endl;
	return (0);
}
