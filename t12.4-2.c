#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void swap(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		swap(&a, &b);
	}
	if (b > c)
	{
		swap(&b, &c);
	}
	if (a > c)
	{
		swap(&a, &c);
	}
	printf("%d,%d,%d\n", a, b, c);
	return 0;
}