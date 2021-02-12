#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

string putnum(char c);

signed main(void)
{
	int n;
	string s, tmp, ans;

	cin >> n;
	ans = "";
	rep(i, n)
	{
		cin >> s;
		tmp = "";
		rep(j, s.size())
			tmp += putnum(s[j]);
		if (tmp == "") continue;
		ans += ((ans == "") ? "": " ") + tmp;
	}
	cout << ans << endl;
	return 0;
}

string putnum(char c)
{
	switch (c)
	{
		case 'b':
		case 'B':
		case 'c':
		case 'C':
			return ("1");
		case 'd':
		case 'D':
		case 'w':
		case 'W':
			return ("2");
		case 't':
		case 'T':
		case 'j':
		case 'J':
			return ("3");
		case 'f':
		case 'F':
		case 'q':
		case 'Q':
			return ("4");
		case 'l':
		case 'L':
		case 'v':
		case 'V':
			return ("5");
		case 's':
		case 'S':
		case 'x':
		case 'X':
			return ("6");
		case 'p':
		case 'P':
		case 'm':
		case 'M':
			return ("7");
		case 'h':
		case 'H':
		case 'k':
		case 'K':
			return ("8");
		case 'n':
		case 'N':
		case 'g':
		case 'G':
			return ("9");
		case 'z':
		case 'Z':
		case 'r':
		case 'R':
			return ("0");
	}
	return ("");
}
