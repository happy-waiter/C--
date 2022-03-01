#include <stdio.h>
int main()
{
	int x, y;
	printf("请输入X的值\n");
	scanf_s("%d", &x);
	if (x < 0)
		y = -1;
	else
		if (x == 0)
			y = 0;
		else
			y = 1;
	printf("y的值为%d", y);
	return 0;
}