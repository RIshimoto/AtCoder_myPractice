#include<bits/stdc++.h>
using namespace std;

signed main()
{
    long long n;
    long long a,b;
    long long cnt;
    long long rem;

	cin >> n >> a >> b;
    cnt = 0;
    cnt += (n / (a + b)) * a;
    rem = n % (a + b);
    cnt += min(rem, a);
    cout << cnt << endl;
    return 0;
}
