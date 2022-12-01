#include <stdio.h>

int main()
{
	int n = 0;
	int a = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			printf("%d ", j);
		}
		printf("%d ", i);
	}
	return 0;
}