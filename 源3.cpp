#include<stdio.h>
int main()
{
	float add(float a, float b);
	float a, b, c;
	printf("������A��B");
	scanf_s("%f%f", &a, &b);
	c = add(a, b);
	printf("��Ϊ%f", c);
	return 0;}
float add(float a, float b)
{
	float z;
	z = a + b;
	return(z);

}
