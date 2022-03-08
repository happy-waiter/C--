#include<stdio.h>
#include<stdlib.h>
int main()

{
	void check(int*);
	int* pl, i;
	pl = (int*)malloc(5 * sizeof(int));
	for (i = 0; i < 5; i++)
		scanf_s("%d", pl + i);
	check(pl);
	return 0;
}
void check(int* p)
{
	int i;
	printf("不及格者");
	for (i = 0; i < 5; i++)
		if (p[i] < 60)
			printf("%d", p[i]);
	printf("\n");
}