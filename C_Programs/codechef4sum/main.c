#include <stdio.h>

int main()
{
	int T;
	int a, b;
	int ans;
	scanf("%d", &T);
	while (T--)
		{
		scanf("%d %d", &a, &b);
		 ans = a + b;
		printf("%d\n", ans);
	}
	return 0;
}
