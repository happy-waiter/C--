#include<stdio.h>
int main()
{
	int a[10], i, j, t;
	printf("请输入十个数，将为你比较大小。");
	for (i = 0;i <= 9;i++)
		scanf_s("%d",&a[i]);
	for (j = 0;j < 9;j++)
	{
		for (i = 0;i < 9 - j;i++)
		{
			if (a[i] > a[i + 1])
			{
				t=a[i]  ;a[i] = a[i + 1];a[i + 1] = t;
			}
		}
	}
	for (i = 0;i <= 9;i++)
		printf("%d ", a[i]);
	printf("\n");
	return(0);
}