#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

bool judge(int *a, int *b, int *c, int *d)
{
 	return ((a[0]-c[0])*(d[1]-c[1])-(d[0]-c[0])*(a[1]-c[1])>0)^((b[0]-c[0])*(d[1]-c[1])-(d[0]-c[0])*(b[1]-c[1])>0);
}

int main(void)
{
	int c[2], d[2]; cin >> c[0] >> c[1] >> d[0] >> d[1];
	int n; cin >> n;
	int p[100][2]; rep(i, n) cin >> p[i][0] >> p[i][1];
	int cnt;

	cnt = 0;
	rep(i, n)
	{
		int a[2] = {p[i][0], p[i][1]};
		int b[2] = {p[(i+1)%n][0], p[(i+1)%n][1]};
		if(judge(a,b,c,d) && judge(c,d,a,b)) cnt++;
	}
	cout << cnt / 2 + 1 << endl;
	return 0;
}
