#include<bits/stdc++.h>
using namespace std;

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n,x;

	scanf("%d", &n);

	int cnt = 0;
	scanf("%d%d", &j, &k);

	cnt = j;

	for (i = 1; i < n; i++)
	{
		scanf("%d%d", &j, &k);

		if (j > cnt)
			cnt = j;

		else
		{
			while (1)
			{
				j += k;
				if (j > cnt)
				{
					cnt = j; break;
				}
			}
		}
	}

	printf("%d", cnt);

	return 0;
}


