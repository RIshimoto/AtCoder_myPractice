#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;

int main(void)
{
  bool ok[3][3]; rep(i, 3) rep(j, 3) ok[i][j] = false;
  bool flag;
  int a[3][3]; rep(i, 3) rep(j, 3) cin >> a[i][j];
  int n; cin >> n;

  rep(i, n)
  {
  	int x;
	cin >> x;
	rep (i, 3) rep (j, 3)
      if (x == a[i][j])
        ok[i][j] = true;
  }
  flag = true;
  rep(i, 3) if (!ok[i][i]) flag = false;
  if (flag)
  {
	  cout << "Yes" << endl;
	  return 0;
  }
  flag = true;
  rep(i, 3) if (!ok[i][2 - i]) flag = false;
  if (flag)
  {
	  cout << "Yes" << endl;
	  return 0;
  }
  rep(i, 3)
  {
  	flag = true;
	rep(j, 3) if (!ok[i][j]) flag = false;
  	if (flag)
  	{
	  cout << "Yes" << endl;
		 return 0;
  	}
  	flag = true;
  	rep(j, 3) if (!ok[j][i]) flag = false;
	if (flag)
	{
		cout << "Yes" << endl;
		return 0;
	}
  }
  cout << "No" << endl;
}
