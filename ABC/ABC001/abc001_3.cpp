#include <bits/stdc++.h>
#define min 0.00001
using namespace std;

int	main(void)
{
	int deg;
	int dis;
	string ans;
	cin >> deg >> dis;
	vector<string> dir = 
	{
		"N",  "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE",
		"S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW"
	};
	ans = "-1";
	if (0.0 * 60 <= dis && dis <= 0.24 * 60)
	{
		cout << "C 0" << endl;
		return (0);
	}
	else if (0.25 * 60 <= dis && dis <= 1.54 * 60)
		ans = "1";
	else if (1.55 * 60 <= dis && dis <= 3.34 * 60)
		ans = "2";
	else if (3.35 * 60 <= dis && dis <= 5.44 * 60)
		ans = "3";
	else if (5.45 * 60 <= dis && dis <= 7.94 * 60)
		ans = "4";
	else if (7.95 * 60 <= dis && dis <= 10.74 * 60)
		ans = "5";
	else if (10.75 * 60 <= dis && dis <= 13.84 * 60)
		ans = "6";
	else if (13.85 * 60 <= dis && dis <= 17.14 * 60)
		ans = "7";
	else if (17.15 * 60 <= dis && dis <= 20.74 * 60)
		ans = "8";
	else if (20.75 * 60 <= dis && dis <= 24.44 * 60)
		ans ="9";
	else if (24.45 * 60 <= dis && dis <= 28.44 * 60)
		ans ="10";
	else if (28.45 * 60 <= dis && dis <= 32.64 * 60)
		ans ="11";
	else if (32.65 * 60 <= dis)
		ans ="12";

	cout << dir[((deg * 10 + 1125) / 2250) % 16] << " " << ans << endl;
	return (0);
}
