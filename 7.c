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
	printf("周长为%f,\n圆面积为%f,\n圆球表面积为%f\n圆球体积%f\n圆柱体积%f", c, s, S, v, V);
	return(0);
}