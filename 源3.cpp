#include<stdio.h>
int main()
{
	float add(float a, float b);
	float a, b, c;
	printf("请输入A和B");
	scanf_s("%f%f", &a, &b);
	c = add(a, b);
	printf("和为%f", c);
	return 0;}
float add(float a, float b)
{
	float z;
	z = a + b;
	return(z);

}
