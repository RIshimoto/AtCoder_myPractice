#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MAXN = 16;

int n;
int start;
int sum;
int dist[MAXN][MAXN];
int t[MAXN][MAXN];
int dp[1 << MAXN][MAXN];

// �ċA�o�[�W����
// �Ebit ���i����ς݂̓_�̃r�b�g�t���O�j
// �Edp[bit][now] ���i���ݓ_��now�ŏ���ς݂�bit�̎��̍ŏ��R�X�g�j
int rec(int bit, int now)
{ 
	//�v�Z�ς݂Ȃ炻�̂܂�
	if (dp[bit][now] >= 0)
		return dp[bit][now];
	if (bit == (1 << n) - (1 << start) - 1) 
	{
		if (sum + dist[now][start] > t[now][start])
			return INF;
		return dp[bit][now] = dist[now][start]; 
	}
	int res = INF;
	rep(k, n)
	{
		// k�Ԗڂ̃r�b�g(�P����n-�P�ɂ�����)�������Ă��Ȃ����
		// �����Ƀr�b�g�𗧂ĂčċA
		if (!(bit & (1 << k)) && k != start)
		{
			if (sum + dist[now][k] < t[now][k])
			{
				sum += dist[now][k];
				res = min(res, rec(bit | 1 << k, k) + dist[now][k]);
				sum -= dist[now][k];
			}
		}

	}
	return dp[bit][now] = res;
}

signed main(void)
{
	int m;
	int ans;
	int v, u, d, b; 

	cin >> n >> m;
	rep(i, n) rep(j, n)
	{
		dist[i][j] = INF;
		t[i][j] = INF;
	}
	rep(i, m) {
		cin >> v >> u >> d >> b; 
		v--; u--;
		dist[v][u] = d;
		dist[u][v] = d;
		t[v][u] = b;
		t[u][v] = b;
	}
	fill((int *)dp, (int *)(dp + (1 << MAXN)), -1);

	ans =  INF;
	cout << rec(0, 0) << endl;

	return 0;
}
