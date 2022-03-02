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
	printf("第十次落地时共经过%lf米", d);
	printf("第十次反弹%lf米高", t);
}