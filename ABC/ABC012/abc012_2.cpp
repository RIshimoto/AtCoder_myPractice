#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int time; cin >> time;
	int h,m,s;
	string hh, mm, ss;

	s = time % 60;
	m = time / 60;
	h = m / 60;
	m = m % 60;
	if (h < 10)
		hh += "0";
	hh += to_string(h);
	if (m < 10)
		mm += "0";
	mm += to_string(m);
	if (s < 10)
		ss += "0";
	ss += to_string(s);
	cout << hh << ":" << mm << ":" << ss << endl;
	return 0;
}
