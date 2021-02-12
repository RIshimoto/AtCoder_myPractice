#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n,m; cin >> n >> m;
	int kid, adult;

	for (int old = 0; old <= n; old++)
	{
		kid = n - old;
		if ((kid * 4 - (m - (old * 3))) % 2 != 0)
			continue;
		adult = (kid * 4 - (m - (old * 3))) / 2;
		kid = n - old - adult;
		if (adult < 0 || kid < 0)
			continue;
		if (m == (adult * 2 + old * 3 + kid * 4))
		{
		    cout << adult << " " << old << " " << kid << endl;
		    return (0);
		}
    }
    cout << "-1 -1 -1" << endl;
    return (0);
}
