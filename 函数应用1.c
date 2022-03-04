#include<stdio.h>
int main()
{
	int max4(int x, int y, int z, int w);
	int a, b, c, d, t;
	printf("请给出四个数的大小");
	scanf_s("%d%d%d%d", &a, &b, &c, &d);


	t = max4(a, b, c, d);
	printf("最大的是%d", t);
}
int max4(int x, int y, int z, int w)
{
	int max2(int x, int y);
return max2(max2(max2(z, w), y), x);
}
int max2(int x, int y)
{
	return(x > y ? x : y);
}