#include<stdio.h>
int main()
{
	int max4(int x, int y, int z, int w);
	int a, b, c, d, t;
	printf("������ĸ����Ĵ�С");
	scanf_s("%d%d%d%d", &a, &b, &c, &d);


	t = max4(a, b, c, d);
	printf("������%d", t);
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