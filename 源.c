#include<stdio.h>
int main()
{
	float r;
	float h;
	scanf_s("%f%f", &r, & h);
	float c, s, S, v, V;
	c = 2 * 3.14 * r;
	s = 3.14 * r * r;
	S = 4 * 3.14 * r * r;
	v = (4 / 3) * 3.14 * r * r * r;
	V = s * h;
	printf("�ܳ�Ϊ%f,\nԲ���Ϊ%f,\nԲ������Ϊ%f\nԲ�����%f\nԲ�����%f", c, s, S, v, V);
	return(0);
}