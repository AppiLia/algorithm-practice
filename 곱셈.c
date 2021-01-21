#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, temp1, temp2, temp3;
	scanf(" %d %d",&a, &b);

	temp1 = b / 100;
	temp2 = (b-(temp1*100)) / 10;
	temp3 = b - (temp1 * 100) - (temp2 * 10);
	printf("%d\n", a*temp3);
	printf("%d\n", a*temp2);
	printf("%d\n", a*temp1);
	printf("%d\n", a*temp3 + a*temp2 * 10 + a*temp1 * 100);

	return 0;
}