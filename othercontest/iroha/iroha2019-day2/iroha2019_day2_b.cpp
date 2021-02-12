#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

struct Point {double x, y;};
typedef Point Vector

double cross(Vector a, Vector b)
{
	return a.x * b.y - a.y * b.x;
}
int ccw(Point p0, Point p1, Point p2)
{
	Vector a = p1 - p0;
	Vector b = p2 - p0;
	if (cross(a, b) > EPS) return 1;
	if (cross(a, b) < -EPS) return -1;
	return 0;
}

bool intersect(Point p1, Point p2, Point p3, Point p4)
{
	return (ccw(p1, p2, p3) * ccw(p1, p2, p4) <= 0 &&\
			ccw(p3, p4, p1) * ccw(p3, p4, p2) <= 0);
}

signed main(void)
{
	int x, y, a, b;
	int s_x, s_y, t_x, t_y;
	P p1, p2, p3, p4;

	cin >> x >> y >> a >> b;
	p1.x = 0; p1.y = a;
	p2.x = x; p2.y = b;
	cin >> p3.x >> p3.y >> p4.x >> p4.y;
	if (intersect(p1, p2, p3, p4))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
