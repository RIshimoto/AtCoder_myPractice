#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int a,b; cin >> a >> b;
	int diff1,diff2;

	diff1 = a - b;
	if (diff1 < 0)
		diff1 *= -1;
	a > b ? diff2 = (b + 10 - a): diff2 = (a + 10 - b);
	if (diff1 < diff2)
		cout << diff1 << endl;
	else
		cout << diff2 << endl;
	return 0;
}
