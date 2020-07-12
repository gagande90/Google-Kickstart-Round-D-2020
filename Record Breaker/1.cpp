#include <bits/stdc++.h>
using namespace std;
int t, n, a[200020];
int main()
{
	scanf("%d", &t);
	for (int tt = 1; tt <= t; tt++)
	{
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		int mx = -1;
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] > mx && (i == n - 1 || a[i] > a[i + 1]))
			{
				ans++;
			}
			mx = max(mx, a[i]);
		}
		printf("Case #%d: %d\n", tt, ans);
	}
	return 0;
}

