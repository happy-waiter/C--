#include<stdio.h>
int main()
{
	int a, b, c;
	int max(int x,int y);
	scanf_s("%d,%d",&a,&b);
	c = max(a, b);
	printf("%d",c);
}
int max(int x, int y)
{
	int z;
	if (x > y)z = x;
	else z = y;
	return(z);
}