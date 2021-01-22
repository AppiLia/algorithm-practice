#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int a, b;
	scanf("%d %d", &a, &b);

	if ((b - 45)<0)
	{
		b = b - 45 + 60;
		a = a - 1;
		if (a<0)
		{
			a = a + 24;
			printf("%d %d\n", a, b);
		}
		else
		{
			printf("%d %d\n", a, b);
		}
	}
	else
	{
		b = b - 45;
		printf("%d %d\n", a, b);
	}
	return 0;
}