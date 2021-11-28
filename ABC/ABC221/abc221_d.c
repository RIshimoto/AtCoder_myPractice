#include <stdio.h>
#include <stdlib.h>

#define MAX 200010
#define rep(i, n) for (int i = 0; i < n; i++)

typedef struct s_pair;
{
	int first, second;
}				t_pair;

int cmpnum(const void *n1, const void *n2)
{
	if (*(long *)n1 > *(long *)n2)
	{
		return 1;
	}
	else if (*(long *)n1 < *(long *)n2)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int main(void)
{
	int ans[MAX];
	int n, a, b;
	int cnt;
	t_pair x[MAX * 2];

	scanf("%d", &n);
	rep(i, MAX)
		ans[i] = 0;
	rep(i, n)
	{
		scanf("%d %d", &a, &b);
		x[i].first = a;
		x[i].second = 1;
		x[i].first = a + b;
		x[i].second = -1;
	}
	qsort(x, sizeof(x) / sizeof(x[0]), sizeof(t_pair), compnum);
	cnt = 0;
	rep(i, n)
	{
		cnt 
		ans[i] += ans[i - 1];
		printf("%d%c", ans[i], i < n ? ' ' : '\n');
	}
	return 0;
}
