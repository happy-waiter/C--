#include<stdio.h>
int main()
{
	int i;
	double h = 100, sum = 0, t, d;
	for (i = 1;i <= 10;)
	{
		h = h / i;
		i = i + 1;
		t = h / i;
		
			d = sum + h;
			
			sum = sum + h + t;

	}
	printf("��ʮ�����ʱ������%lf��", d);
	printf("��ʮ�η���%lf�׸�", t);
}