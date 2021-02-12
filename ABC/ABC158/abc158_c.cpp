#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a,b; cin >> a >> b;
    double x,y;

    for (int i = 0; i < 1000000; i++)
    {
	x = (i * 8) / 100;
	y = (i * 10) / 100;
	if (a == x && b == y)
	{
	    cout << i << endl;
	    return 0;
	}

    }
    cout << -1 << endl;
}
