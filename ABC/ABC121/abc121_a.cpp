#include <bits/stdc++.h>
#define rep(i, n) for(int i= 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int H, W, h, w;
	cin >> H >> W >> h >> w;
	cout << H * W - h * W - (H - h) * w << endl;
	return 0;
}
